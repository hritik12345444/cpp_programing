// Copy contents of one stack to another in same order without recursion
#include<iostream>
#include<stack>
using namespace std;
stack<int> copy(stack<int> &st){
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top()); // sort form
        st.pop();
        // int curr= st.top();
        // temp.push(curr);
    }

    stack<int> res;
    while(not temp.empty()){
        res.push(temp.top());
        temp.pop();
    }

    return res;
}

int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    stack<int> res;
    res= copy(st);
    while(!res.empty()){
        cout << res.top() << "|" << endl;
        res.pop();
    }

    return 0;
}