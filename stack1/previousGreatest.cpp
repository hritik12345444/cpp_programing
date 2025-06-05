// previous greatest element
/* we can solve this question by two methods first is 1. reverse the original vector
2.  find the next greates and smallest element
3.  reverse the res vector
4.  reverse the original vectro

2nd method is traverse in right to left direction
*/
#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>  // for reverse the vector
using namespace std;

vector<int> nextGreatestElement(vector<int> &v){  /// called function by method 1.

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

// method 1
vector<int> previousGreatestElement(vector<int> &v){

    // int size= v.size();
    reverse(v.begin(),v.end());  // reverse the original vector
    vector<int> res= nextGreatestElement(v); // find nextGreatestElement of original vector
    reverse(res.begin(), res.end()); // reverse the res vector and this is our ans vector 
    reverse(v.begin(),v.end());   // reverse the original vector because when we print the original vector than thaat is alos reversed
    return res;
    
}

// method 2
vector<int> pge(vector<int> &v){
    int size= v.size();
    stack<int> st;
    vector<int> res(size, -1);
    st.push(size-1);
    for(int i= size-2; i>=0; i--){
        while(!st.empty() and v[i] > v[st.top()]){
            res[st.top()]= v[i];
            st.pop();
        }
        st.push(i);
    }

    return res;
}



int main(){
    vector<int> v={4,3,5,6,2,1,0,3,9,10,8,7,2};
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;
    vector<int> res= previousGreatestElement(v);
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }cout << endl;

    return 0;
}


// important for interview    
// practice again 