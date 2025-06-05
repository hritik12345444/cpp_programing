// insert a node at start
#include<iostream>
using namespace std;
class node{
public:
    int value;
    node* next;
    node* prev;

    node(int value){
        this->value= value;
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

    void insertAtStart(int data){
        node* new_node= new node(data);
        if(head==NULL){
            head=new_node;
            tail= new_node;
            return;
        }
        head->prev=new_node;
        new_node->next= head;
        head= new_node;
        return;
    }

    void display(){
        node* temp= head;
        while(temp){
            cout << temp->value << " ";
            temp= temp->next;
        }cout << "NULL" << endl;
    }
};

int main(){
    doublylinkedlist dll;
    dll.insertAtStart(1);
    dll.display();
    dll.insertAtStart(2);
    dll.display();
    dll.insertAtStart(3);
    dll.display();
    
    return 0;
}