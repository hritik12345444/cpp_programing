// Given a series of N daily prices quotes for a stock, we need to calculate the span of the stock's price for all n days. The span of the stock's price in one day is the maximum number of consecutive days (starting from that day and going backward) for which the stock price was less than or equal to the price of that day

// span -> span of ith day is price of consecutive previous day which is less or equal to the price of ith day is called spacn of ith day
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>  // not compulsury
using namespace std;

// calculate previous greatest element index than subtract i - pgei[i]
vector<int> spanofithday(vector<int> &v){
    int size= v.size();
    stack<int> st;
    vector<int> res(size, -1);
    st.push(size-1);
    for(int i= size-2; i>=0; i--){
        while(!st.empty() and v[i] > v[st.top()]){
            res[st.top()]= i;
            st.pop();
        }
        st.push(i);
    }

    return res;
}

int main(){
    vector<int> v={100,80,60,70,60,75,85};
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;
    vector<int> res= spanofithday(v);
    for(int i=0; i<res.size(); i++){
        cout << i-res[i] << " " ;
    }cout << endl;

    return 0;
}

// important for interview    
// practice again 