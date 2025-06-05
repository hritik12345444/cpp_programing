// Given head, the head of a linked list, determine if the linked list is a palindrome or not. 2nd method
#include<iostream>
using namespace std;
class node{
public:
    int value;
    node* next;

    node(int data){
        value=data;
        next= NULL;
    }
};

class linkedlist{
public:
    node* head;

    linkedlist(){
        head= NULL;
    }

    void insertAtEnd(int data){
        node* new_node= new node(data);
        if(head==NULL){
            head= new_node;
            return;
        }

        node* temp= head;
        while(temp->next != nullptr){
            temp=temp->next;
        }
        temp->next = new_node;
        return;
    }

    void display(){
        node* temp= head;
        while(temp!= NULL){
            cout << temp->value<< "->";
            temp=temp->next;
        }cout << "NULL" << endl;
    }
};

node* reverselist(node* head){
    node* curr= head;
    node* pre= NULL;
    while(curr){
        node* next_node= curr->next;
        curr->next = pre;
        pre= curr;
        curr=next_node;
    }

    return pre;
}

bool isPalindrome(node* head1 , node* head2){
    while(head1){
        if(head1->value != head2->value){
            return false;
        }
        head1= head1->next;
        head2= head2->next;
    }
    return true;
}

int main(){
    linkedlist  list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insertAtEnd(4);
    list.insertAtEnd(4);
    list.insertAtEnd(3);
    // list.insertAtEnd(2);
    list.insertAtEnd(1);
    list.display();

    linkedlist list2;
    list2.head=reverselist(list.head);
    list2.display();

    cout << isPalindrome(list.head, list2.head) << endl;

    return 0;
}

// NOT WORKING 100%