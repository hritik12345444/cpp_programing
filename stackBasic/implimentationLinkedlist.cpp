// implimentation of stack using singular-linkedlist
#include<iostream>
using namespace std;
class  node{
public:
    int value;
    node* next;

    node(int dat){
        value= dat;
        next= NULL; 
    }
};

class stack{
    node* head;
    int size;
    int capacity;
public:
    stack(int cap){
        this->capacity= cap;
        size= 0;
        head= NULL;
    }

// inset a node at the top 
    void push(int data){
        node* new_node= new node(data);
        if(size == capacity){
            cout << "Overflow" << endl;
            return;
        }

        this->size++;
        new_node->next= head;
        head= new_node;
        return;
    }

// delet a node from the top
    void pop(){
        if(size <= 0){
            cout << "Underflow" << endl;
            return;
        }

        this->size--; // compulsury because when removing a node from stack than size is also decrease if we do not do this than many time hit the overflow condition 
        node* new_head= head;
        head= head->next;
        free(new_head);
        return;
    }

// Check stack is empty or not
    void isEmpty(){
        if(size <= 0){
            cout << "Empty" << endl;
        }else{
            cout << "NOt empty" << endl;
        }
        return;
    }

// return the size of stack 
    int getSize(){
        return size;
    }

// Check the stakc is full or not 
    void isFull(){
        if(size==capacity){
            cout << "Stack is full"<< endl;
        }else{
            cout << "Stack is not full "<< endl;
        }
        return;
    }

// print the value at the top
    void displayTop(){
        cout << "Value at the top ->  " << head->value << endl;
        return;
    }
};

int main(){

    stack st(5);  // create a stack of capacity 5
    st.pop();  // remove the topMost element
    st.isEmpty(); // check the stack is empty or not
    st.push(1);  // insert a node with value 1 at the head
    st.push(2);  // insert a node with value 1 at the head
    st.push(3);  // insert a node with value 1 at the head
    st.push(4);  // insert a node with value 1 at the head
    st.push(5);  // insert a node with value 1 at the head
    cout << "Size of stakc is ->  " << st.getSize() << endl;
    st.isFull();  // Check the stack is full or not
    // st.pop();     // remove the node from top of stack 
    st.displayTop(); // print the value of topMOst node
    st.push(6);  // insert a node with value 1 at the head
    st.displayTop();  // print the value of topMost node

    return 0;
}

// WORKING