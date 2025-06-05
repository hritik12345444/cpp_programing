// Implement a C++ program that passes a pointer to a function, modifies the value pointed to by the pointer inside the function, and them prints the updated value outside the function.
#include<iostream>
using namespace std;
void modify(int* n){
    *n=*n+5;
    // if given input is n , than so that output is n+5 by these statement 
    return ;
}
int main(){
    int n;
    cout << "enter a number ";
    cin >> n;
    modify(&n);
    cout << n;
    return 0;
}