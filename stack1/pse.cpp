// previous first-smallest element
// Here also two method to solve this question but i do only one method
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

// traverse in opposite directin for this question

vector<int> pse(vector<int> &v){
    int size= v.size();
    stack<int> st; // stores the indexes
    vector<int> res(size, -1);
    st.push(size-1);
    for(int i= size-2; i>=0; i--){
        while(!st.empty() and v[i] < v[st.top()]){
            res[st.top()] = v[i];
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
    vector<int> res= pse(v);
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }cout << endl;

    return 0;
}

/// Working

// important for interview    
// practice again 