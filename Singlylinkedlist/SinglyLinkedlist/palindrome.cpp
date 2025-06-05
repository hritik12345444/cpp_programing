// Given head, the head of a linked list, determine if the linked list is a palindrome or not.
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

bool isPalindrome(node* head){
    node* slow= head;
    node* fast= head;

    // Find mid element
    while(fast && fast->next){ // fast(fast!=NULL) && fast->next(fast->next!=NULL)
        slow=slow->next;
        fast=fast->next->next;
    }

    // reverse the 2nd half of list
    node* curr_ele= slow->next;
    node* pre_ele= slow;
    slow->next = NULL; // last ele of 1st half if pointing to null
    while(curr_ele){
        node* next_ele=curr_ele->next;
        curr_ele->next= pre_ele;
        pre_ele=curr_ele;
        curr_ele=next_ele;
    }
    // Now pre_ele is my new head of 2nd half of list

    node* head1= head;
    node* head2= pre_ele;

    // check equal or not
    while(head2!=NULL){
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
    list.insertAtEnd(2);
    list.insertAtEnd(1);
    list.display();

    cout << isPalindrome(list.head)<< endl;
    return 0;
}