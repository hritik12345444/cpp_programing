// Given 2 sorted linked lists, merge them into 1 singly linked list such that the resulting list is also sorted
#include<iostream>
using namespace std;
class node{
public:
    int value;
    node* next;

    node(int val){
        value=val;
        next= NULL;
    }
};

class linkedlist{
public:
    node* head;

    linkedlist(){
        head=NULL;
    }

    void insertEle(int value){
        node* new_node= new node(value);
        if(head==NULL){
            head= new_node;
            return;
        }
        node* temp= head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next = new_node;
    }

    void display(){
        node* temp= head;
        while(temp != NULL){
            cout << temp->value << "->";
            temp= temp->next;
        }
        cout << "NULL" <<endl;
    }
};

// 1 3 5
// 2 4

node* mergeInSortedList(node* &head1, node* &head2){
    // create a new_node for linking 
    node* new_node= new node(-1);
    node* ptr1= head1;
    node* ptr2= head2;
    node* ptr3 = new_node;

    while(ptr1 != NULL && ptr2 != NULL){
        if(ptr1->value < ptr2->value){
            ptr3->next = ptr1;
            ptr1= ptr1->next;
        }else{
            ptr3->next = ptr2;
            ptr2= ptr2->next;
        }
        ptr3= ptr3->next;
    }

    if(ptr1 != NULL){  // if ptr1 != NULL , ptr2 == NULL 
        ptr3->next = ptr1;
    }else{ // here ptr1 == NULL, ptr2!=NULL, then linke with ptr2
        ptr3->next = ptr2;
    }
    return new_node->next;
}

int main(){
    linkedlist list1;
    list1.insertEle(1);
    list1.insertEle(3);
    list1.insertEle(5);
    list1.display();

    linkedlist list2;
    list2.insertEle(2);
    list2.insertEle(4);
    list2.display();

    linkedlist merge;
    merge.head = mergeInSortedList(list1.head, list2.head);
    merge.display();

    return 0;
}
// WORKING