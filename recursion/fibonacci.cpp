// nth fibonacci number
#include<iostream>
using namespace std;
int fibo(int n){
    // base case
    if(n==1 || n==2) return 1;
    int res=fibo(n-1) + fibo(n-2);
    return res;
}
int main(){
    int n;
    cout << "enter n for find the fibonacci number ";
    cin >> n;
    int res = fibo(n);
    cout << res << endl;
    return 0;
}