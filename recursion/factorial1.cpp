// factorial of a number
#include<iostream>
using namespace std;
int fact(int n){
    // base case
    if(n==1) return 1;
    int res=n*fact(n-1);
    return res;
}
int main(){
    int n;
    cout << "enter number : ";
    cin >> n;
    int res= fact(n);
    cout << res << endl;
    return 0;
}