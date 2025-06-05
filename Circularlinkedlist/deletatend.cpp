// delete at end
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

class circularlinkedlist{
public:
    node* head;

    circularlinkedlist(){
        head= NULL;
    }

    void inseratTail(int data){
        node* new_node= new node(data);
        if(head==NULL){
            new_node->next = new_node;
            head= new_node;
            return;
        }

        node* tail= head;
        while(tail->next != head){
            tail= tail->next;
        }
        tail->next= new_node;
        new_node->next= head;
        tail= tail->next;
        return;
    }

    void display(){
        node* temp= head;
        do{
            cout << temp->value << " ";
            temp= temp->next;
        }while(temp!=head);
        cout << endl;
    }
};

void deletAtEnd(node* &head){
    node* tail= head;
    while(tail->next->next != head){
        tail= tail->next;
    }

    node* temp= tail->next;
    tail->next= head;
    free(temp);
    return;
}


int main(){
    circularlinkedlist list;
    list.inseratTail(1);
    list.inseratTail(2);
    list.inseratTail(3);
    list.inseratTail(4);
    list.inseratTail(5);
    list.display();

    deletAtEnd(list.head);
    list.display();
    return 0;
}