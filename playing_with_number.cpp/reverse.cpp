// Reverse digit of a number 
#include<iostream>
using namespace std;   
int main(){
    int n,rev=0;
    cout << "enter a number ";
    cin >> n;
    while(n!=0){
        int rem=n%10;
        rev=(rev*10)+rem;
        n/=10;
    }
    cout << "the reverse numberr is : " << rev;
    return 0;
}