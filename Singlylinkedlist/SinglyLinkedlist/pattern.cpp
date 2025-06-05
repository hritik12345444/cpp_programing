// You are given the head of a singly linked-list. The list can be represented as:
// 1->2->3->4->5->6->NULL
// Output 1->6->2->5->3->4 -> NULL
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

    void insertatend(int data){
        node* new_node= new node(data);
        if(head==NULL){
            head= new_node;
            return;
        }

        node* temp= head;
        while(temp->next){
            temp=temp->next;
        }

        temp->next= new_node;
        return;
    }

    void display(){
        if(head==NULL){
            cout << "NULL" << endl;
        }
        node* temp= head;
        while(temp){
            cout << temp->value<< "->";
            temp=temp->next;
        }cout << "NULL" << endl;
    }
};

node* pattertype(node* &head){
    node* slow= head;
    node* fast= head;
    while(fast && fast->next){
        slow= slow->next;
        fast= fast->next->next;
    }
    // Now slow is at mid node

    node* curr= slow->next;
    slow->next = NULL;
    node* prev= slow;
    while(curr){
        node* next_node= curr->next;
        curr->next= prev;
        prev= curr;
        curr= next_node;
    }
    // new head of 2nd half of list is at prev

    node* head1= head;
    node* head2= prev;

    while(head1 != head2){
        node* temp= head1->next;
        head1->next= head2;
        head1= head2;
        head2= temp;
    }

    return head;
}

int main(){
    linkedlist list;
    list.insertatend(1);
    list.insertatend(2);
    list.insertatend(3);
    list.insertatend(4);
    list.insertatend(5);
    // list.insertatend(6);
    list.display();

    list.head= pattertype(list.head);
    list.display();
    return 0;
}

// PROPER WORKING