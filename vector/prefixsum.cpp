// Given an integers array 'a', return the prefix sum/running sum in the same array without creating a new array.
#include<iostream>
#include<vector>
using namespace std;
void prefixsum(vector<int> &v){
    int n=v.size();
    for(int i=0; i<n; i++){
        v[-1]=0;
        v[i]=v[i]+v[i-1];
    }
    return;
}
int main(){
    int n;
    cout << "enter size of vector ";
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++){
        int ele;
        cout << "enter elements ";
        cin >> ele;
        v.push_back(ele);
    }
    prefixsum(v);

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    return 0;
}
// not hard but focus on it