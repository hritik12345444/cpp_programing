                                // Frog jump 
// There are N stone, numbered 1,2,3...N. For each (i<=i<=N), the height of stone i is hi. There is a frog who is
// initially on stone 1. He will repeat the following action some number of times to reach stone N.     If the frog
//is currently on stone i,m jump to stone i+1 or stone i+2 Here, a cost of |hi-hj| is incurreed, where j is the 
//stone to land on.          Find the minimum possible total cost inclurred before the frog reaches stone N.
#include<iostream>
using namespace std;
int minimum_jump(int* arr, int n, int idx){
    // base case
    if(idx ==n-1) return 0;
    if(idx ==n-2) return minimum_jump(arr,n,idx+1)+abs(arr[idx] - arr[idx+1]);
    int res= min(minimum_jump(arr,n,idx+1) + abs(arr[idx]-arr[idx+1]) , minimum_jump(arr,n,idx+2) + abs(arr[idx] - arr[idx+2]));
    return res;
}
int main(){
    int arr[]={10,40,30,20};
    int n=4;
    int res=minimum_jump(arr,n,0);
    cout << res;
    return 0;
}
// very very important