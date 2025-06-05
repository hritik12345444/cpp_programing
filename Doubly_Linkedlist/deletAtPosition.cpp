// delet a node at an arbitrary position
#include<iostream>
using namespace std;
class node{
public:
    int value;
    node* next;
    node* prev;

    node(int data){
        value= data;
        next= NULL;
        prev= NULL;
    }
};

class doublylinkedlist{
public:
    node* head;
    node* tail;

    doublylinkedlist(){
        head= NULL;
        tail= NULL;
    }

    void insertAtEnd(int data){
        node* new_node= new node(data);
        if(tail==NULL){
            tail= new_node;
            head= new_node;
            return;
        }

        tail->next= new_node;
        new_node->prev = tail;
        tail= new_node;
        return;
    }

    void display(){
        node* temp= head;
        while(temp){
            cout << temp->value << " ";
            temp= temp->next;
        }cout << endl;
    }
};

void deletAtEnd(node* &tail){
    node* temp= tail;
    tail= tail->prev;
    tail->next= NULL;
    free(temp);
    return;
}

// Assumed that k is less than length of doublylinkedlist
void deletAtPosition(node* &head, node* &tail, int k){
    if(k==5){ // yeaha ek count bnaa ke traverse krna hoga k == tail hai ya nahi uske liye
        deletAtEnd(tail);
        return;
    }
    int count= 1;
    node* temp= head;
    while(count < (k-1)){
        temp= temp->next;
        count++;
    }
    // now temp is at (k-1)th node

    node* delet= temp->next;
    temp->next= temp->next->next; // point to after the deletion node
    if(temp->next->next!=NULL){
        node* pre= temp->next->next;
        pre->prev= temp;
       
    }

    free(delet);
    return;
}

int main(){ 
    doublylinkedlist dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(4);
    dll.insertAtEnd(5);
    dll.display();

    deletAtPosition(dll.head, dll.tail, 4);
    dll.display();
    return 0;
}