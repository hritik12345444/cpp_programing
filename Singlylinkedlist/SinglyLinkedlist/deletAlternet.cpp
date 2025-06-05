// Given the head of a linked list, delete every alternate element from the list starting from the second element.

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

    void insertAtTail(node* &head, int val){
        node* temp= head;
        node* new_node= new node(val);
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next= new_node;
    }

    void display(node* head){
        node* temp= head;
        while(temp != NULL){
            cout << temp->value << " ";
            temp=temp->next;
        }cout <<" NULL " <<  endl;
    }
};

void deletAlternate(node* &head){
    node* curr_node = head;
    while(curr_node != NULL && curr_node->next != NULL){
        node* temp=curr_node->next;
        curr_node->next=temp->next;
        free(temp);
        curr_node=curr_node->next;
    }
}

int main(){
    node* head = new node(1);
    head->insertAtTail(head,2);
    head->insertAtTail(head,3);
    head->insertAtTail(head,4);
    head->insertAtTail(head,5);
    head->insertAtTail(head,6);
    head->insertAtTail(head,7);
    head->insertAtTail(head,8);

    head->display(head);
    deletAlternate(head);
    head->display(head);

    return 0;
}
// WORKING