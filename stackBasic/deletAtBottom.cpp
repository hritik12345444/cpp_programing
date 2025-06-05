// Delet at bottom
#include<iostream>
#include<stack>
using namespace std;

void deletAtBottomit(stack<int> &st){ /// iterative way
    stack<int> temp;
    int len= st.size();
    while(len != 1){
        temp.push(st.top());
        st.pop();
        len--;
    }
    st.pop();
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
    return;
}

void deletAtBottom(stack<int> &st){ //// recursive way
    // base case
    if(st.size()==1){
        st.pop();
        return;
    }

    int curr= st.top();
    st.pop();
    deletAtBottom(st);
    st.push(curr);
    return;
}


void display(stack<int> st){   /// display stack
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

    cout << "Original stack"  << endl;
    display(st);
    cout << endl;

    deletAtBottom(st);
    cout << "Modified stack"<< endl << endl;
    display(st);
    cout << endl;

    return 0;
}