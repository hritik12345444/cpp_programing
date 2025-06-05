// Given a number n. Find the sum of natural numbers till n but with alternate signs.
#include<iostream>
using namespace std;
int natural(int n){
    // base case
    if(n==1)  return 1;
    int res= ((n%2==0) ? (-n) : n) + natural(n-1);
    return res;
}
int main(){
    int n;
    cout << "enter n ";
    cin >> n;
    int res=natural(n);
    cout << res;
    return 0;
}
