// frog jump 2
#include<iostream>
using namespace std;
int minimum_cost(int* arr, int i, int n){
    // base case
    if(i==n-1) return 0;
    if(i==n-2) return minimum_cost(arr,i+1,n) + abs(arr[i]-arr[i+1]);
    
    int res=min(minimum_cost(arr,i+1,n)+abs(arr[i]-arr[i+1]) , minimum_cost(arr,i+2,n)+abs(arr[i]-arr[i+2]));
    return res;
}
int main(){
    int arr[]={10,30,40,20};
    int n=4;
    int res=minimum_cost(arr,0,n);
    cout << res;
    return 0;
}
// very very important