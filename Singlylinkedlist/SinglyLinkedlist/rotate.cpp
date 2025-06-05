// PATTERN: REARRANGEMENT OF NODES IN A LIST
// Given the head of a linked list, rotate the list to the right by k places.

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

void rotateAtK(node* &head, int k){
    int len=0;
    node* count=head;
    // calculate length
    while(count){
        len++;
        count=count->next;
    }
    
    k= k%len;  // if k is the multiple of lenth 
    if(k==0){
        return;
    }
    node* curr=head;
    for(int i=1; i<(len-k); i++){
        curr= curr->next;
    }

    node* new_head= curr->next;
    curr->next= NULL;

    node* temp=new_head;
    while(temp->next){
        temp=temp->next;
    }
    temp->next=head;
    head= new_head;
    return;
}

int main(){
    linkedlist list;
    list.insertatend(1);
    list.insertatend(2);
    list.insertatend(3);
    list.insertatend(4);
    list.insertatend(5);

    rotateAtK(list.head, 2);
    list.display();

    return 0;
}