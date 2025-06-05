// Given two numbers p & q, find the value p^q using a recursive function.
#include<iostream>
using namespace std;
int pow(int p, int q){
    // base case
    if(q==1) return p;
    int ans =pow(p,q-1)*p;
    return ans;
}
int main(){
    int p,q;
    cout << "enter p ";
    cin>>p;
    cout << "enter q ";
    cin >> q;
    int res=pow(p,q);
    cout <<p << " raised to " << q <<" is " << res << endl;
    return 0;
}
// 2^3 ---> (2^2)*2 ---> (2^1)*2 ----> (2^0)*2---> 2^0== 1