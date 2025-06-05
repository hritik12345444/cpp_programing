//Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linkedlist sorted as well.


#include<iostream>
using namespace std; 
class node{
public:
    int value;
    node* next;

    node(int value){
        this->value=value;
        next = NULL;
    }  
};
class linkedlist{
public:
    node* head;

    linkedlist(){
        head= NULL;
    }

    void insertAtTail(int value){
        node* new_node= new node(value);
        if(head == NULL){// linkedlist is empty
            head = new_node;
            return;
        }

        node* temp= head;
        while(temp->next != NULL){
            temp= temp->next;
        }
        temp->next = new_node;
    }

    void display(){
        if(head==NULL){
            cout << "Linked-list is empty" << endl;
            return;
        }

        node* temp= head;
        while(temp != NULL){
            cout << temp->value << " " ;
            temp= temp->next;  // move forward
        }cout << endl;
    }
};


void deleduplicate(node* &head){
    node* curr = head;
    while(curr != NULL){
        while(curr->next != NULL && curr->value == curr->next->value){
            node* temp= curr->next;
            curr->next = curr->next->next;
            free(temp);
        }
        curr=curr->next;
    }
}

int main(){
    linkedlist ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.insertAtTail(3);
    ll.display();
    deleduplicate(ll.head);
    ll.display();
    return 0;
}

// WORKING