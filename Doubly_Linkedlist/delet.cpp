// Delete a node at the start
#include<iostream>
using namespace std;
class node{
public:
    int value;
    node* next;
    node* prev;

    node(int value){
        this->value= value;
        this->next= NULL;
        this->prev= NULL;
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
        if(tail==NULL){ // my list is empty
            tail= new_node;
            head= new_node;
            return;
        }

        // node* temp= tail;
        tail->next= new_node;
        new_node->prev= tail;
        tail= tail->next;  // tail= new_node both are correct
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

void deletAtStart(node* &head){
    node* temp= head;
    head= head->next;
    head->prev= NULL;
    free(temp);
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

    deletAtStart(dll.head);
    dll.display();
    return 0;
}