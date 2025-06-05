#include<iostream>
using namespace std;

class node{
public:
    int value;
    node* next;

    node(int data){
        value = data;
        next = NULL; 
    }
};

int main(){
    node* list= new node(1);
    cout << list->value << " " << list-> next<< endl;
    return 0;
}

// WORKING