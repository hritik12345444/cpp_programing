// Add a node at the start
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

    
    void insertAtStart(int data){

        node* new_node= new node(data);

        // is circular linkedlist is empty
        if(head==NULL){
            // head= new_node;
            // new_node->next= head;
            new_node->next= new_node;
            head= new_node;
            return;
        }

        node* tail= head;
        while(tail->next != head){
            tail= tail->next;
        }
    
        // now tail is at the last node
        tail->next= new_node;
        new_node->next= head;
        head= new_node;
    }

    void display(){
        node* temp= head;

        // do while loop because at first time temp is pointing to head than we can't check temp != head, so here use do while loop
        do{
            cout<< temp->value << " ";
            temp= temp->next;
        }while(temp != head);
        cout << endl;
    }

};



int main(){
    circularlinkedlist list;
    list.insertAtStart(6);
    list.insertAtStart(5);
    list.insertAtStart(4);
    list.insertAtStart(3);
    list.insertAtStart(2);
    list.insertAtStart(1);
    list.display();
    return 0;
}