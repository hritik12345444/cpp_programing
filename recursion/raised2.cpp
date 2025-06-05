// Given two numbers p & q, find the value p^q using recursion
#include<iostream>
using namespace std;
int raise(int p, int q){
    // base case
    if(q==0) return 1;
    if(q % 2 == 0){
        // if q is even 
        int res=raise(p,q/2);
        res=res*res;
        return res;
    }
    else {
        if(q % 2 !=0){
            // if q is odd 
            int res=raise(p,(q-1)/2);
            res=p * res * res;
            return res;
        }
    }
}
int main(){
    int p,q;
    cout << "enter p & q ";
    cin >> p >> q;
    int ans=raise(p,q);
    cout << ans << endl;
    return 0;
}