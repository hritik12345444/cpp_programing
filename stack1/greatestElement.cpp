// return a array of next greater element, you also given a array 
// using stack

// time complexity = o(n)
// space complexity = o(n)

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextGreatest(vector<int> &v){

    int size= v.size();
    vector<int> res(size, -1);
    stack<int> st; // store indexes
    st.push(0);   // not medetairy
    for(int i= 1; i<size; i++){
        while(!st.empty() and v[i] > v[st.top()]){  // first we have to check the stack is empty or not after that check another condition
            res[st.top()] = v[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){ // not medetairy
        res[st.top()]= -1;
        st.pop();
    }
    return res;
}

int main(){
    vector<int> v={4,3,5,6,2,1,0,3,9,10,8,7,2};
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;
    vector<int> res= nextGreatest(v);
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }cout << endl;

    return 0;
}


// important for interview    
// practice again 