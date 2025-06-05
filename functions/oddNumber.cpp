// Given two number a and b , write a program using functions to prrint all the odd numbers between them.
#include<iostream>
using namespace std;
void odd(int a, int b){
    for(int i=a; i<=b; i++){
        if(i%2!=0){
            cout << i <<" ";
        }
    }
   return ;
}
int main(){
    int a,b;
    cout <<"enter a and b" ;
    cin >> a >> b;
    odd(a,b);
    return 0;
}