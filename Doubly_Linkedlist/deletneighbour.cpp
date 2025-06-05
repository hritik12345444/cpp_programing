// Given the head of a doubly linked list, delete the nodes whose neighbours have the same value. Traverse the list from right to left.
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

    void insertattail(int data){
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
            cout << temp->value<< " ";
            temp= temp->next;
        }cout << endl;
    }
};

void deleteNeighbour(node* &head, node* &tail){

    node* curr_node= tail->prev;
    while(curr_node != head){
        if(curr_node->prev->value == curr_node->next->value){
            node* temp= curr_node;
            curr_node->prev->next= curr_node->next;
            curr_node->next->prev= curr_node->prev;
            curr_node= curr_node->prev;
            free(temp);
        }else{
            curr_node= curr_node->prev;
        }
    }
}

int main(){
    doublylinkedlist list;
    // list.insertattail(1);
    // list.insertattail(2);
    // list.insertattail(1);
    // list.insertattail(2);
    // list.insertattail(4);
    // list.insertattail(3);
    // list.insertattail(6);
    // list.insertattail(3);
    // list.insertattail(2);

    list.insertattail(1);
    list.insertattail(1);
    list.insertattail(1);
    list.insertattail(2);
    list.insertattail(2);
    list.insertattail(3);
    list.insertattail(2);
    list.display();

    deleteNeighbour(list.head , list.tail);
    list.display();
    return 0;
}

// WORKING