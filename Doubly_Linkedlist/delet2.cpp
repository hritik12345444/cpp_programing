// // Delete a node at the end
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
        new_node->prev= tail;
        tail= new_node;
        return;
    }

    void display(){
        node* temp= head;
        while(temp){
            cout << temp->value<< " ";
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

int main(){
    doublylinkedlist dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(4);
    dll.insertAtEnd(5);
    dll.display();

    deletAtEnd(dll.tail);
    dll.display();
    return 0;
}