// factorail
#include<iostream>
using namespace std;
int fact(int n){
    // base case
    if(n==0) return 1;
    return n*fact(n-1);
}
int main(){
    cout << fact(5);
    return 0;
}