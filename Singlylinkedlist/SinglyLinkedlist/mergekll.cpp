// You are given an array of k linked-lists lists, each linked-list is sorted in ascending order. Merge all the linked-lists into one sorted linked-list and return it.
#include<iostream>
#include<vector>
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
        return;
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

node* mergeTwoLists(node* &head1, node* &head2){
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
node* megeklinkedlist(vector<node*> &lists){
    if(lists.size()==0){
        return NULL;
    }
    // jab tak vector lists ka size ek se jada rhega tb tkk loop chalega aur last me lists vector me ek lists bachega jisko return krr denge whi mera k merged sorted linked-lists hoga
    
    while(lists.size() > 1){
        node* head1= lists[0];           
        node* head2= lists[1];
        node* newMergedHead= mergeTwoLists(head1,head2);
        lists.push_back(newMergedHead);
        lists.erase(lists.begin());
        lists.erase(lists.begin());
    }
    return lists[0];
}

int main(){
    linkedlist list1;
    list1.insertEle(1);
    list1.insertEle(5);
    list1.insertEle(9);
    list1.display();

    linkedlist list2;
    list2.insertEle(2);
    list2.insertEle(6);
    list2.insertEle(10);
    list2.display();


    linkedlist list3;
    list3.insertEle(3);
    list3.insertEle(7);
    list3.insertEle(8);
    list3.display();


    linkedlist list4;
    list4.insertEle(4);
    list4.insertEle(11);
    list4.insertEle(12);
    list4.display();

    vector<node*> lists;
    lists.push_back(list1.head);
    lists.push_back(list2.head);
    lists.push_back(list3.head);
    lists.push_back(list4.head);

    linkedlist mergeList;
    mergeList.head=megeklinkedlist(lists);
    mergeList.display();

    return 0;
}
// WORKING