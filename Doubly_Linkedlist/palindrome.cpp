// Gien the head of a doubly linked list, find if it's a palindrome or not.
#include<iostream>
using namespace std;
class node{
public:
    int value;
    node* next;
    node* prev;

    node(int data){
        value= data;
        next= NULL;
        prev= NULL;
    }
};

class doublylinkedlist{
public:
    node* head;
    node* tail;

    doublylinkedlist(){
        head= NULL;
        tail= NULL;
    }

    void insertAtEnd(int data){
        node* new_node= new node(data);
        if(tail==NULL){
            tail= new_node;
            head= new_node;
            return;
        }

        tail->next= new_node;
        new_node->prev= tail;
        tail= tail->next;
        return;
    }

    void display(){
        node* temp= head;
        while(temp){
            cout << temp->value << " ";
            temp= temp->next;
        }cout << endl;
    }
};

bool ifPalindrome(node* head, node* tail){
    while(head->next != tail && head != tail){
        if(head->value != tail->value){
            return false;
        }
        head= head->next;
        tail= tail->prev;
    }
    return true;
}

int main(){
    doublylinkedlist dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(3);
    dll.insertAtEnd(3);
    dll.insertAtEnd(2);
    dll.insertAtEnd(1);
    dll.display();

    bool res= ifPalindrome(dll.head, dll.tail);
    if(res==1){
        cout << "Yes, it is palindrome";
    }else{
        cout << "No, it is not palindrome";
    }

    return 0;
}