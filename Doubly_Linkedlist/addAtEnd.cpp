// Add a node at end
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

    // id tail == NULL i.e list is empty 
    // than put tail= new_node
    // head = new_node
    
    void insertAtEnd(int data){
        node* new_node= new node(data);
        if(tail == NULL){
            head= new_node;
            tail= new_node;
            return;
        }

        tail->next= new_node;
        new_node->prev= tail;
        tail= new_node; // move the tail pointer at the new_node because now new_node is my tail node
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
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                

int main(){
    doublylinkedlist dll;
    dll.insertAtEnd(1);
    dll.display();
    dll.insertAtEnd(2);
    dll.display();
    dll.insertAtEnd(3);
    dll.display();
    dll.insertAtEnd(4);
    dll.display();
    return 0;
}