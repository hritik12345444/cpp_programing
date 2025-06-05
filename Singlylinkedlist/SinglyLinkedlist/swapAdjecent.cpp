// Given a linked list, swap every two adjacent nodes and return its head. You may not modify the values in the list's nodes. Only nodes themselves may be changed.
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
node* swapAdjacent(node* &head){
    // base case
    if(head ==NULL || head->next==NULL){
        return head;
    }

    node* nextptr= head->next; 
    head->next= swapAdjacent(nextptr->next);
    nextptr->next= head;
    return nextptr;
}


int main(){
    linkedlist list;
    list.insertatend(1);
    list.insertatend(2);
    list.insertatend(3);
    list.insertatend(4);
    list.insertatend(5);
    list.insertatend(6);
    list.display();
    list.head= swapAdjacent(list.head);
    list.display();

    return 0;
}