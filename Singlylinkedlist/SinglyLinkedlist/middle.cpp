// PATTERN: SLOW & FAST 
// Find the middle element of the given linked list.
#include<iostream>
using namespace std;
class node{
public:
    int value;
    node* next;

    node(int data){
        value= data;
        next=nullptr;
    }
};

class linkedlist{
public:
    node* head;

    linkedlist(){
        head=nullptr;
    }

    void insertatend(int data){
        node* newnode= new node(data);
        if(head==nullptr){
            head=newnode;
            return;
        }

        node* temp= head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next= newnode;
        return;
    }

    void display(){
        node* temp= head;
        while(temp){
            cout << temp->value << "->";
            temp=temp->next;
        }
        cout << "NULL" << endl;
    }
};

int midEle(node* head){
    node* ptr1= head;
    node* ptr2= head;
    if(ptr1 == NULL){
        return -1;
    }
    while(ptr2 != nullptr and ptr2->next != nullptr){
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    }
    return ptr1->value;
}

int main(){
    linkedlist list;
    list.insertatend(1);
    list.insertatend(2);
    list.insertatend(3);
    list.insertatend(4);
    list.insertatend(5);
    list.insertatend(6);
    list.insertatend(7);
    list.display();

    int res= midEle(list.head);
    if(res != -1){
        cout << "This is the middle element of linked-list -> " <<  res << endl;
    }else{
        cout << "list is empty" << endl;
    }
    return 0;
}
// WORKING FOR ODD & EVEN NOS OF ELEMENTS 