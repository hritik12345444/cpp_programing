// implement a recursive function to find the maximum and minimum elements in an array
#include<iostream>
using namespace std;
// This function retruns maximum element of array
int maxele(int arr[], int idx, int n){
    // base case
    if(idx==n-1) return arr[idx];
    int res= max(arr[idx],maxele(arr,idx+1, n)); // Here max is inbuilt function for find the maximum element of the given array 
    return res;
}
// This function returns minimum element of array 
int minele(int arr[], int idx, int n){
    // base case
    if(idx==n-1) return arr[idx];
    int res= min(arr[idx], minele(arr,idx+1, n)); /// Here min is inbuilt function to find the minimum element of the given array
    return res;
}
int main(){
    int arr[5]={2,3,9,5,4};
    int n=5;
    int res1= maxele(arr, 0,n);
    int res2= minele(arr,0, n);
    cout << "max is " << res1 << " min is "<< res2 << endl;
    return 0;
}