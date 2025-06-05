// inset at bottom
#include<iostream>
#include<stack>
using namespace std;


// recursive function
void insertAtBottom(stack<int> &st, int val){
    // base  case
    if(st.empty()){
        st.push(val);
        return;
    }

    int curr= st.top();
    st.pop();
    insertAtBottom(st,val);
    st.push(curr);
    return;
}

// Iterative way
void insertAtBottomit(stack<int> &st, int val){

    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
    return;

}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    int val= 600;  // insert this value at bottom of the stack

    // return the size of the stack
    // cout << st.size()<< endl;   

    insertAtBottom(st, val);  // using recursion
    insertAtBottomit(st,val);   // using iterative way

    // Here 600 two times insert at bottom because we have create two function for insert at bottom 

    while(!st.empty()){
        cout << st.top()<< endl;
        st.pop();
    }
    return 0;
}

// complete using recursion and inerative way