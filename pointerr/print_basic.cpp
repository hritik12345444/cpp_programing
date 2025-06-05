// Write a program that declares a pointer variable, assigns it the address of an integer variable, and then prints the value of the integer through the pointer
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a digit : ";
    cin >> n;
    int* ptr=NULL;
    ptr=&n;
    cout <<&n << " " << &ptr << " " << *ptr << endl;
    return 0;
}