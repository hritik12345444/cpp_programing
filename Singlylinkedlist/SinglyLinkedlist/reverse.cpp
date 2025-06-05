// Given the head of a singly linked list and print the reversed list.

#include<iostream>
using namespace std;

class node{
public:
    int value;
    node* next;

    node(int data){
        value = data;
        next= NULL;
    }
};

class linkedlist{
public:
    node* head;

    linkedlist(){
        head= NULL;
    }

    void insetAtTail(int val){
        node* new_node= new node(val);
        if(head==NULL){
            head= new_node;
            return;
        }

        node* temp= head;
        while(temp->next){
            temp= temp->next;
        }
        temp->next= new_node;
    }

    void display(){
        node* temp= head;
        while(temp){
            cout << temp->value << "-> " ;
            temp=temp->next;
        }cout << endl;
    }
};

void reverse(node* &head){
    // base case
    if(head->next == NULL){
        cout << head->value << "-> ";
        return;
    }


    // this is alose use as base case
    // if(head == NULL){
    //     return;
    // }

    reverse(head->next);
    cout << head->value <<  "-> " ;
}

int main(){
    linkedlist ll;
    ll.insetAtTail(1);
    ll.insetAtTail(2);
    ll.insetAtTail(3);
    ll.insetAtTail(4);
    ll.insetAtTail(5);
    ll.insetAtTail(6);
    ll.insetAtTail(99);
    ll.insetAtTail(65);
    ll.insetAtTail(25);
    ll.insetAtTail(0);

    ll.display();

    reverse(ll.head);

    
    return 0;
}

// WORKING