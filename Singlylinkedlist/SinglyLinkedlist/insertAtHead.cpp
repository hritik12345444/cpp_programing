// insertat head insert at tail insert at position deletathead deletattail deletatposition

#include<iostream>
using namespace std;

class node{
public:
    int value;
    node* next;

    node(int value){
        this->value = value;
        this->next = NULL;  // this is expectional automatically insert a gargbage address if i can't put NULL 
    }
};

// Add a node at the head   & time complexity is o(1)

void InsertAtHead(node* &head, int val){
    node* new_node= new node(val);
    new_node->next=head;
    head=new_node;
}

// add node at the tail & time complexity is o(n) because we have to traverse from starting to end.
void InsertAtTail(node* &head, int value){
    node* temp= head;
    node* new_node= new node(value);
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next = new_node ;
}

// add node at the given position & time complexity is o(n) in worst case because we have to traverse from starting to positon.
void InsertAtPosition(node* &head, int pos, int value){  // pos=2
    if(pos==0){
        InsertAtHead(head,value);
        return;
    }
    int current_pos=0;
    node* temp= head;
    node* new_node= new node(value);
    while(current_pos != (pos-1)){
        temp=temp->next;
        current_pos++;
    }
    // new_node=temp->next;
    // temp=new_node->next;
    new_node->next = temp->next;
    temp->next=new_node;
}

// update the value of node at position & time complexity is o(n) in worst case
void updateAtPosition(node* &head, int pos, int new_val){
    node* temp= head;
    int cur_pos=0;
    while(cur_pos != pos){
        temp=temp->next;
        cur_pos++;
    }
    temp->value= new_val;
}

// delet at start & time complexity is o(1).
void deletAtStart(node* &head){
    node* temp= head;  // this node is deleted
    head = head->next;
    free(temp);
}

// delet at end & time complexity is o(1);
void deletAtEnd(node* &head){
    node* temp=head;
    node* second_last_node= head;
    while(second_last_node->next ->next != NULL){
        second_last_node=second_last_node->next;
        temp=temp->next;
    }
    temp=temp->next; // this is deleted

    second_last_node->next= NULL;
    free(temp);
}


// deletion at position
void deletAtPosition(node* head, int pos){
    if(pos==0){
        deletAtStart(head);
        return;
    }
    int curr_pos=0;
    node* prev= head;
    while(curr_pos != pos-1){
        prev= prev->next;
        curr_pos++;
    }
    
    node* temp= prev->next;
    temp-> next = temp->next->next;
    free(temp);
}

// print the linked list
void print(node* head){

    node* temp=head;
    while(temp != NULL){
        cout << temp->value << " -> ";
        temp=temp->next;
    }
    cout << " NULL " << endl;

}

int main(){
    node* head= new node(5);
    print(head);
    InsertAtHead(head,4);
    print(head);
    InsertAtHead(head,3);
    print(head);
    InsertAtHead(head,2);
    print(head);

    InsertAtTail(head,7);
    print(head);
    InsertAtTail(head,8);
    print(head);
    InsertAtTail(head,0);
    print(head);

    InsertAtPosition(head,2,6);
    print(head);
    InsertAtPosition(head,1,99);
    print(head);

    updateAtPosition(head,2,9);
    print(head);

    deletAtStart(head);
    print(head);
    deletAtEnd(head);
    print(head);
    deletAtPosition(head,2);
    print(head);

    return 0;
}

// WORKING