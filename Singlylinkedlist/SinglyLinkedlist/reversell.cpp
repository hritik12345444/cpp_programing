//Given the head of a singly linked list, reverse the list, and return the reversed list.

#include<iostream>
using namespace std;
 
class node{
public:
    int value;
    node* next;

    node(int value){
        this->value=value;
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

node* reverseList(node* &head){
    node* curr_node= head;
    node* prev_node=NULL;


    while(curr_node != NULL){
        node* next_node= curr_node->next;
        curr_node -> next = prev_node;
        prev_node=curr_node;
        curr_node=next_node;
    }
    // Loop ends when the current node is at Null(out of list) and prev_node is at last node of list
    return prev_node;
}

node* reverseListRecursion(node* &head){
    if(head->next==NULL  || head==NULL){
        return head;
    }

    node* new_head = reverseListRecursion(head->next);
    head->next ->next = head;
    head->next= NULL;  // create for temporary for each node excepted original head

    return new_head;
}



int main(){
    linkedlist List;
    List.insetAtTail(1);
    List.insetAtTail(02);
    List.insetAtTail(3);
    List.insetAtTail(4);
    List.insetAtTail(5);
    List.display();
    List.head = reverseList(List.head);

    // List.head=reverseListRecursion(List.head);
    List.display();
    return 0;
}

// working try with recursion method