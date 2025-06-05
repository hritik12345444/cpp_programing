// Given the head of a linked list, remove the k-th node from the end of the list and return its head.

// we assumed the k is less than the length of linkedlist
#include<iostream>
using namespace std;
class node{
public:
    int value;
    node* next;

    node(int data){
        value=data;
        next=nullptr;
    }
};

class linkedlist{
public:
    node* head;

    linkedlist(){
        head=nullptr;
    }

    void insertEle(int ele){
        node* new_node= new node(ele);
        if(head==NULL){
            head=new_node;
            return;
        }
        node* temp=head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next= new_node;
    }

    void display(){
        node* temp= head;
        while(temp!=NULL){
            cout << temp->value<< " ";
            temp=temp->next;
        }
        cout << endl;
    }
};

void removeKthNodeEnd(node* &head, int k){
    node* ptr1= head;
    node* ptr2= head;
    int counter=0;
    while(counter < k){// counter jabb tkk k se kmm hai tbb tkk ptr2 ko ek step se aage le jayenge
        ptr2=ptr2->next;
        counter++;
    }

    if(ptr2 == NULL){// ye loop tbb chalega jbb k ka value lenght of list ke equal hai to iska mtlb head delet krna hai
        node* temp= head;
        head= head->next;
        free(temp);
        return;
    }
    // ptr2->next == null, ptr1->next will be deleted
    while(ptr2 ->next !=nullptr){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    node* temp= ptr1->next;// deleted node
    ptr1->next=ptr1->next->next;
    free(temp);
}

int main(){
    linkedlist list;
    list.insertEle(1);
    list.insertEle(2);
    list.insertEle(3);
    list.insertEle(4);
    list.insertEle(5);

    list.display();
    removeKthNodeEnd(list.head,2);
    list.display();
    return 0;
}
// WORKING