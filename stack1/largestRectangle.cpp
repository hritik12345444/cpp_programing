// Given an array of integer heigths representing the histograms's bar height where the width of each bar is 1, return the area of the largest rectangle in the histrogram
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int largestRectangle(vector<int> &v){
    int size= v.size();
    stack<int> st;
    // vector<int> res(size, -1);
    vector<int> res;  // create a res array for calculate largest rectangle
    vector<int> nsei(size, -1);  // create a index of next smallest element 
    vector<int> psei(size, -1);  // create a index of previous smallest element 

    // this is for calculate next smallest element index
    st.push(0);
    for(int i=1; i<size; i++){
        while(!st.empty() and v[i] < v[st.top()]){
            nsei[st.top()]= i;
            st.pop();
        }
        st.push(i);
        if(i==size-1){
            nsei[i]= size;
        }
        // nsei complete
    }

    // this is for calculate previous smallest element index
    st.push(size-1);
    for(int i= size-1; i>=0; i--){
        while(!st.empty() and v[i] < v[st.top()]){
            psei[st.top()]= i;
            st.pop();
        }
        st.push(i);
        // psei complete
    }

    int largeRec=INT8_MIN; // this is original result

    for(int i=0; i<size; i++){
        int ans= v[i]*(nsei[i]-psei[i]-1);
        if(ans > largeRec){ // compare the largeRec and ans for find the best result 
            largeRec = ans;
        }
    }
    return largeRec;

}

int main(){

    vector<int> v={2,1,5,6,2,3,0,2,1,5,6,2,3};
    int res = largestRectangle(v);
    cout << res << endl;


    return 0;
}