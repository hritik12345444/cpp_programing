// Inplement a recursive function to get the nth Fibonacci number 
#include<iostream>
using namespace std;
int fibo(int n){
    //base case
    if(n==1 || n==2) return 1;
    int ans=fibo(n-1) + fibo(n-2);
    return ans;
}
int main(){
    int n;
    cout << "enter nth term : ";
    cin >> n;
    int res=fibo(n);
    cout << res << endl;
    return 0;
}