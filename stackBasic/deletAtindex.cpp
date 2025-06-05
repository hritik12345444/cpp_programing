// Delet at index
#include<iostream>
#include<stack>
using namespace std;

void deletAtIndex(stack<int> &st, int idx){
    int size= st.size();
    int count= 1;

    // check for invalid index
    if(idx < 0 || idx >= size){
        cout << endl <<  "Invalid idx, no change in original stack "<< endl;
        return;
    }

    stack<int> temp; // create a temp stack 

    while(count <= (size-idx-1)){ // move element st -> temp
        temp.push(st.top());
        st.pop();
        count++;
    }
    
    // Now we are at the that index which we have to deleted
    st.pop();

    // copy the element from temp->st
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
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
    deletAtIndex(st,1);
    cout << endl << endl <<  "Modified stack "<< endl <<  endl;
    display(st);
    return 0;
}

// working