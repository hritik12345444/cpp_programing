// print the max value of array
#include<iostream>
using namespace std;
int maximum(int arr[], int idx, int n){
    // base case
    if(idx==n-1) return arr[idx];
    int res= max(arr[idx],maximum(arr,idx+1,n)); // max is inbuilt function
    return res;
}
int main(){
    int arr[4]={1,9,87,16};
    int res= maximum(arr,0,4);
    cout << res << endl;
    return 0;
}
