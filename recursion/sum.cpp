// given an integer, find out the sum of its digits using recursion.
#include<iostream>
using namespace std;
int sum(int n){
    if(n<=9 && n>=0) return n;
    int ld=n%10;
    int ans=sum(n/10)+ld;
    return ans;
}
int main(){
    int n;
    cout << "enter  number ";
    cin >> n;
    int res=sum(n);
    cout << res<< endl;
    return 0;
}
// dry run 0n copy for example 1234