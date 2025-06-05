// Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.
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

node*  oddEvenIndicies(node* &head){
    node* odd= head;  // 1 3 5
    node* even_head= head->next; // 2 
    node* even= even_head;// 2 4 NULL
    while(even !=NULL and even->next !=NULL ){  // VVI IMPORTANT Phle even likhna hoga fir even ka next this is rule for use logincal and operator
        odd->next= odd->next->next;
        even->next= even->next->next;

        odd= odd->next;
        even= even->next;
    }
    odd->next= even_head;
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


    linkedlist list2;
    list2.head= oddEvenIndicies(list.head);
    list2.display();
    return 0;
}

// PROPER WORKING and logical and operator per dhyan dena hai