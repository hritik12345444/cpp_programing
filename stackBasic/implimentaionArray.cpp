// Implementation of stack using array
#include<iostream>
using namespace std;
class stack{
    // arr, top & capacity are private element
    int* arr;
    int top;
    int capacity;

public:
// constructor for stack class
    stack(int size){
        this->capacity= size;
        arr= new int[size];
        top= -1;
    }

// Insert element in stack 
    void push(int val){
        if(top == capacity-1){
            cout << "overflow" << endl;
            return;
        }

        this->top++;
        arr[this->top]= val;
        return;
    }

// Remove topMost element from stack
    int pop(){
        if(this->top == -1){
            cout << "Underflow" << endl;
            return INT8_MIN;
        }

        this->top--;
        return this->top;
    }

// return topMost element from stack
    int getTop(){
        if(top == -1){
            cout << "Underflow" << endl;
            return INT8_MIN;
        }

        return arr[top];
    }

// Check stack is empty or not
    void isEmpty(){
        if(top > -1){
            cout << "Stack is not empty" << endl;
        }else{
            cout << "Stack is empty" << endl;
        }
    }

// return size of stack
    int size(){
        return top+1;
    }

// Check the stack is full or not 
    void isFull(){
        if(top == capacity-1){
            cout << "Stack is full" << endl;
        }else{
            cout << "Stack is not full" << endl;
        }
    }
};


int main(){

    stack st(5);  // create a stack with 5 capacity
    st.push(1);    // insert 1 in top 
    st.push(2);    // insert 1 in top 
    st.push(3);    // insert 1 in top 
    st.pop();       // remove top element from stack
    st.push(4);    // insert 1 in top 
    st.push(5);    // insert 1 in top 
    st.pop();      // remove top element from stack
    st.isFull();     
    st.isEmpty();
    cout <<"Size of stack is ->  " <<  st.size() << endl;
    cout << "topMost element is " << st.getTop()<< endl;

    // stack st(5);
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // cout << st.getTop() << endl;
    // st.push(4);
    // st.push(5);
    // cout << st.getTop() << endl;
    // st.push(8);
    return 0;
}