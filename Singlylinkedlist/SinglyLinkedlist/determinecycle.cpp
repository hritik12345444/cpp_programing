// PATTERN: SLOW & FAST POINTER
// Given head, the head of a linked list, determine if the linked list has a cycle in it
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

bool checkCycle(node* head){
    node* ptr1= head;
    node* ptr2= head;
    while(ptr2 != NULL and ptr2->next != NULL){
        ptr1 = ptr1->next;
        ptr2= ptr2->next->next;
        if(ptr1 == ptr2){
            return true;
        }
    }
    return false;
}

void removeCycle(node* head){
    node* p1= head;
    node* p2= head;
    while(p2!=NULL and p2->next != NULL){
        p1=p1->next;
        p2= p2->next->next;
        if(p2==p1){
            p1= head;
            while(p2->next != p1->next){
                p1=p1->next;
                p2=p2->next;
            }
            p2->next= NULL;
        }
    }
    return;
}
int main(){
    linkedlist list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insertAtEnd(4);
    list.insertAtEnd(5);
    list.insertAtEnd(6);
    list.insertAtEnd(7);
    list.insertAtEnd(8);
    list.insertAtEnd(9);

    // create cycle in list
    list.head->next->next->next->next->next->next->next->next->next= list.head->next->next;
    bool res= checkCycle(list.head);
    if(res){
        cout << "True"<< endl;
    }else{
        cout << "False" << endl;
    }

    // if cycle present in list than remove it 
    if(res){
        removeCycle(list.head);
        list.display();
    }
    return 0;
}
// PROPER WORKING