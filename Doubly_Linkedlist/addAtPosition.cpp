// Add a node at an arbitrary position
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

    void insertAtTail(int data){
        node* new_node= new node(data);
        if(tail==NULL){
            head= new_node;
            tail= new_node;
            return;
        }

        tail->next= new_node;
        new_node->prev= tail;
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

// assume that k is less than length of the linkedlist
    void insertAtPosition(int val, int k){
        node* new_node= new node(val);
        int count = 1;
        node* temp= head;
        while(count < (k-1)){
            temp= temp->next;
            count++;
        }

        // now temp is at (k-1)th node
        new_node->next=temp->next;
        temp->next= new_node;
        new_node->prev= temp;
        if(new_node->next != NULL){// check if new_node->next will not be null
            new_node->next->prev= new_node;
        }
        return;
    }
};

int main(){
    doublylinkedlist dll;
    dll.insertAtTail(1);
    dll.insertAtTail(2);
    dll.insertAtTail(3);
    dll.insertAtTail(4);
    dll.insertAtTail(5);
    dll.display();

    dll.insertAtPosition(6,6);
    dll.display();
    return 0;
}