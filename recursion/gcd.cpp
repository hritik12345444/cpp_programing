// Given two numbers x and y. Find the greatest commn divisor of  x and y using recursion.
#include<iostream>
using namespace std;
int gcd(int a, int b){
    // base case
    if(a == b ) return a;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    return gcd(a,b-a);
}
int main(){
    int x , y;
    cout << "enter x & y ";
    cin >> x >> y;
    int res= gcd(x,y);
    cout << "gcd of the given number is a " << res;
    return 0;
}