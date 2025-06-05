//Given the head of a singly linked list, reverse the list, and return the reversed list.

#include<iostream>
using namespace std;

class node{
public:
    int value;
    node* next;

    node(int data){
        value=data;
        next=NULL;
    }
};

class LinkedList{
public:
    node* head;

    LinkedList(){
        head=nullptr;  // nullptr == NULL
    }

    // insert in linkedlist
    void insertAtTail(int data){
        node* new_node= new node(data);
        if(head==nullptr){
            head=new_node;
            return;
        }

        node* temp= head;
        while(temp->next != nullptr){
            temp=temp->next;
        }
        temp->next= new_node;
    }

    void display(){
        node* temp= head;
        while(temp!=nullptr){
            cout << temp->value << " ";
            temp=temp->next;
        }cout << endl;
    }
};

node* reverseRecursive(node* &head){

    // base case
    if(head->next == nullptr || head == nullptr){// ya to list  me ek element ho tbb usko reverse nhi krenge return krr denge
        return head;
    }

    //recursive case
    node* new_head= reverseRecursive(head->next);
    head->next->next=head;
    head->next = nullptr;
    return new_head;
}

int main(){
    LinkedList list;
    list.insertAtTail(1);
    list.insertAtTail(2);
    list.insertAtTail(3);
    list.insertAtTail(4);
    list.insertAtTail(5);
    list.insertAtTail(5);
    list.insertAtTail(5);
    list.insertAtTail(5);
    list.insertAtTail(5);

    list.display();

    list.head = reverseRecursive(list.head);

    list.display();
    return 0;
}