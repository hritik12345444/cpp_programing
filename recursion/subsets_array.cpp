// Given an array of integers, print sum of all subsets in it. Output sums can b printed n any order.
#include<iostream>
#include<vector>
using namespace std;
void subset_sum(int* arr, int i, int n,int sum, vector<int> &v){
    // base case
    if(i==n) {
        v.push_back(sum);
        return;
    }
    subset_sum(arr,i+1,n,sum+arr[i],v);
    subset_sum(arr,i+1,n,sum,v);
}
int main(){
    int arr[]={2,4,5};
    vector<int> v;
    int n=3;
    subset_sum(arr,0,n,0,v);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
// very very important 