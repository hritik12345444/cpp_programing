// Calculate the factorial of a given number using recursion.
#include<iostream>
using namespace std;
int fact(int n){
    // base case
    if(n==1) return 1;
    int ans=n*fact(n-1);
    return ans;
}
int main(){
    int n;
    cout << "enter n ";
    cin >> n;
    int res=fact(n);
    cout << "factorial of "<< n << " is " << res << endl;
    return 0;
}