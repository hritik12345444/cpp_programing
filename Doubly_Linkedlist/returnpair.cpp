// Given the head of a doubly linked list. The values of the linked list are sorted in non-decreasing order. Find if there exists a pair of distinct nodes such that the sum of their values is x. Return the pair in the form of a vector [l,r]. Where l and r are the vaues stored in the 2 nodes pointed by the pointers. If there are multiple such pairs, return any of them. If there si no such pair return[-1, -1]
#include<iostream>
#include<vector>
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

vector<int> findPairs(node* head, node* tail, int k){

    vector<int>v = {-1,-1};
    while(head != tail and head->next != tail){
        if(head->value + tail->value == k){
            v[0]= head->value;
            v[1]= tail->value;
            return v;
        }

        if(head->value + tail->value > k){
            tail= tail->prev;
        }else{
            head= head->next;
        }
    }

    if(head->value + tail->value == k){// extra check important
        v[0]= head->value;
        v[1]= tail->value;
        return v;
    }

    return v;

}

int main(){
    doublylinkedlist list;
    list.insertattail(2);
    list.insertattail(5);
    list.insertattail(6);
    list.insertattail(8);
    list.insertattail(10);
    list.display();
    
    vector<int> v;
    v= findPairs(list.head, list.tail,11);
    cout << v[0] << " " <<  v[1]<< endl;
    return 0;
}