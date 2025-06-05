// Given an array, print all the elements of the array recursevly
#include<iostream>
using namespace std;
void print(int arr[], int idx, int n){
    if(idx==n) return ;
    cout<<arr[idx]<< " ";
    print(arr,idx+1,n);
    return;
}
int main(){
    int arr[]={1,2,3,4,6,8};
    int n=sizeof(arr)/sizeof(arr[0]); // total size of array divided by size of 1st element of array
    int idx=0;
    print(arr,idx,n);
    return 0;
}