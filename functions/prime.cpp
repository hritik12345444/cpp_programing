// Given two numbers a and b, write a program to print all the prime numbers present between a and b. Using function.
#include<iostream>
using namespace std;
// check prime or not taking number from a to b one-by-one
void prime (int n){
    bool flag=true;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
          flag=false;
          break;
        }
    }
    if(flag==true){
        cout << n << " ";
    }
    return ;
}
int main(){
    int a,b;
    cout << "enter a and b and not starting with 1 ";
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        // passing i to a function for check and print if it is prime.
        prime(i); // calling a function
    }
    return 0;
}
// good question