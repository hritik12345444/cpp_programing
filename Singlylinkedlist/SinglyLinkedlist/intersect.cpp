// Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null
#include<iostream>
using namespace std;

class node{
public:
    int value;
    node* next;

    node(int value){
        this->value=value;
        this->next=NULL;
    }
};

class linkedlist{
public:
    node* head;

    linkedlist(){
        head= NULL;
    }

    void insert_ele(int val){
        node* new_node= new node(val);
        if(head==NULL){
            head= new_node;
            return;
        }

        node* temp= head;
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
        }cout  <<  endl;
    }
};

int getlength(node* head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}

node* moveAHead(node* head, int k){
    int count=0;
    while(count < k){
        head= head->next;
        count++;
    }
    return head;
}

node* intersection(node* head1, node* head2){
    int len1=0, len2=0;

    len1= getlength(head1);  // calculate lenght of head1
    len2= getlength(head2);  // calculate lenght of head2
    node* ptr1= head1;
    node* ptr2= head2;
    if(len1 > len2){ // if list1 is greater
        int k= len1-len2;
        ptr1= moveAHead(head1,k); // move forward at k steps
    }else{
        int k= len2 - len1;
        ptr2= moveAHead(head2,k);
    }
    while(ptr1!=NULL){ // while ptr1 or ptr2 not pointing to NULL
        if(ptr1 == ptr2){
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;
}

int main(){
    linkedlist list1;
    list1.insert_ele(1);
    list1.insert_ele(2);
    list1.insert_ele(3);
    list1.insert_ele(4);
    list1.insert_ele(5);
    list1.display();

    linkedlist list2;
    list2.insert_ele(6);
    list2.insert_ele(7);
    list2.insert_ele(8);

    // Create intersection into both lists
    list2.head->next->next->next = list1.head->next->next->next->next;
    list2.display();

    node* res= intersection(list1.head, list2.head);
    if(res!=NULL){
        cout << res->value << endl;
    }else{
        cout << "NULL" << endl;
    }
    return 0;
}

// WORKING