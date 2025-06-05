// sum of the digit of the given numberr
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout << "enter a group of digit ";
    cin >> n;
    while(n!=0){
        int rem=n%10;
        sum+=rem;
        n/=10;
    }
    cout << "sum of the digit is : " << sum;
    return 0;
}