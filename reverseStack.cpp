// reverse a stack in original stack
#include<iostream>
#include<stack>
using namespace std;

// recursive case
void insertAtBottom(stack<int> &st, int val){  /// insert the element of stack to bottom
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

// recursive case
void reverseStack(stack<int> &st){
    
    // base case
    if(st.empty()){
        return;
    }
    int cur= st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,cur); // recursion se bahar aate time element to direct st me insert krne ke bajay usee insetatbottom kiye hai kyuki stack reverse ho jaye
    return;
}


// display the stack
void display(stack<int> st){
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
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
    cout << endl << "Original stack" << endl << endl;
    display(st);

    reverseStack(st);
    
    cout << endl << endl <<  "Modified stack "<< endl <<  endl;
    display(st);
    return 0;
}