// Implement a recursive function to find the maximum and minimum elements in an array
#include<iostream>
using namespace std;
void maximum(int arr[],int n){
    if(n==0) return;
    int max=-1;
    if(arr[n]> max) max=arr[n];
    maximum(arr,n-1);
    cout << max<< endl;
    return ;
}
int main(){
    int arr[5]={1,3,2,5,4};
    maximum(arr,5);
    return 0;
}
// array ka question recursion se nhi bnn paa rha hai 