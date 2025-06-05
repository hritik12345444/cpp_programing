// Given the head of a doubly linked list, reverse it.
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

// in reverse function all the links of each nodes i.e prev & next will change changes (curr->next = curr->prev  and curr->prev = curr->next); 
void reversedll(node* &head, node* &tail){
    node* curr= head;
    while(curr){                    // 1 2 3 nul
        node* nextptr= curr->next; // 2 3 null
        curr->next= curr->prev;// 1 next null , 2 next 1 , 3 next 2  
        curr->prev= nextptr; // 1 prev 2 , 2 prev 3 , 3 prev null
        curr= nextptr;
    }
    head= tail;
    tail= head;
}

int main(){
    doublylinkedlist dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(4);
    dll.insertAtEnd(5);
    dll.insertAtEnd(6);
    dll.display();

    reversedll(dll.head, dll.tail);
    dll.display();
    return 0;
}
// WORKING