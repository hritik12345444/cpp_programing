// Given a number n. Find the increasing sequence from 1 to n without using any loops.
#include<iostream>
using namespace std;
void increasing (int n){
    // base case 
    if(n==0) return;
    increasing(n-1);
    cout <<n << " ";
    return;
}
int main(){
    int n=10;
    increasing(n);
    return 0;
}