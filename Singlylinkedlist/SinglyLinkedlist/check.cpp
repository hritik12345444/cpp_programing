// Given 2 linked lists, Tell if they are equal or not. Two linked lists are equal if they have the same data and the arrangment of data is also the same.

#include<iostream>
using namespace std;
class node{
public:
    int value;
    node* next;

    node(int value){
        this->value= value;
        this->next = NULL;
    }
};

class linkedlist{
public:
    node* head;

    linkedlist(){
        head=NULL;
    }

    void insertAtTail(int val){
        node* new_node= new node(val);

        // if our linkedlist is empty
        if(head==NULL){
            head= new_node;
            return ;
        }

        // if few elements are present in our linkedlist
        node* temp=head;
        while(temp->next != NULL){
            temp= temp->next;
        }
        temp->next= new_node;
    }

    void display(){
        node* temp= head;
        while(temp!=NULL){
            cout << temp->value << " -> ";
            temp=temp->next;
        }
        cout << "NULL" <<  endl;
    }
};

bool checkEqualOrNOr(node* head1, node* head2){
    node* tempa= head1;
    node* tempb= head2;

    while(tempa != NULL and tempb != NULL){// jabtak koi ek temp null nahi ho jaye
        if(tempa->value != tempb->value){
            return false;
        }
        tempa= tempa->next;
        tempb = tempb->next;
    }

    // kisi list me element hai ya nahi check krega 
    if(tempa == NULL and tempb != NULL){
        return false;
    }

    // kisi list me element hai ya nahi check krega 
    if(tempa != NULL and tempb==NULL){
        return false;
    }

    return true;
}

int main(){

    linkedlist list1;
    list1.insertAtTail(1);
    list1.insertAtTail(2);
    list1.insertAtTail(3);
    list1.insertAtTail(4);
    list1.insertAtTail(5);
    list1.insertAtTail(6);

    list1.display();

    linkedlist list2;
    list2.insertAtTail(1);
    list2.insertAtTail(2);
    list2.insertAtTail(3);
    list2.insertAtTail(4);
    list2.insertAtTail(5);
    list2.insertAtTail(6);
    list2.display();
    bool res= checkEqualOrNOr(list1.head, list2.head);

    if(res== 0){
        cout << "NOt equal"<< endl;
    }else{
        cout << "Equal"<< endl;
    }

    return 0;
}

// Working