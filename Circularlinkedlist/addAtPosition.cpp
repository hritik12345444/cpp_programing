// insert at position
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
   circularlinkedlist list;
   list.insertAtEnd(1);
   list.insertAtEnd(2);
   list.insertAtEnd(3);
   list.insertAtEnd(4);
   list.insertAtEnd(5);
   list.display();

   list.insertAtPosition(6,5);
   list.display();
    return 0;
}