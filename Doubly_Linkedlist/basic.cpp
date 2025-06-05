// Create a node of doubly linkedlist
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

class Doublylinkedlist{
public:
    node* head;
    node* tail;

    Doublylinkedlist(){
        head= NULL;
        tail= NULL;
    }
};

int main(){
    node* new_node= new node(3);

    Doublylinkedlist dll;
    dll.head= new_node;
    dll.tail = new_node;
    cout << dll.head->value  <<" "<< dll.tail->value << endl;
    return 0;
}