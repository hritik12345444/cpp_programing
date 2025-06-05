// Add a node at the tail
#include<iostream>
using namespace std;
class node{
public:
    int value;
    node* next;

    node(int data){
        value= data;
        next= NULL;
    }
};

class circularlinkedlist{
public:
    node* head;

    circularlinkedlist(){
        head= NULL;
    }

    void insertAtEnd(int data){
        node* new_node= new node(data);
        if(head==NULL){
            // new_node->next= new_node;
            // head= new_node;
            head= new_node;
            new_node->next= head;
            return;
        }

        node* tail= head;
        while(tail->next != head){
            tail= tail->next;
        }

        // now tail is pointing to last node
        tail->next= new_node;
        new_node->next= head;
        tail= tail->next;
        return;
    }

    void display(){
        node* temp= head;

        // do while loop because at first time temp is pointing to head than we can't check temp != head, so here use do while loop
        do{
            cout << temp->value << " ";
            temp= temp->next;
        }while(temp != head);
        cout << endl;
        return;
    }
};



int main(){
    circularlinkedlist list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insertAtEnd(4);
    list.insertAtEnd(5);
    list.insertAtEnd(6);
    list.display();
    return 0;
}