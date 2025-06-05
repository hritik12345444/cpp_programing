// Copy contents of one stack to another in same order using recursion
#include<iostream>
#include<stack>   // important for use stack function
using namespace std;

void copy(stack<int> &st, stack<int> &res){
    // base case
    if(st.empty()){
        return;
    }

    int curr= st.top();
    st.pop();
    copy(st,res);
    res.push(curr);
    return;
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // while(not st.empty()){
    //     cout << st.top() << endl;
    //     st.pop();
    // }
    stack<int> res;
    copy(st,res);
    // print the result stack
    while(not res.empty()){
        cout << res.top() << "|"<< endl;
        res.pop();
    }
    return 0;
}