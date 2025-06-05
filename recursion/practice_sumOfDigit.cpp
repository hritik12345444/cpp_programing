// Sum_Of_Digit
#include<iostream>
using namespace std;
int sum_Of_Digit(int n){
    // base case
    if(n<=9 and n>=1) return n;
    return (n%10) + sum_Of_Digit(n/10);
}
int main(){
    int n;
    cin >> n;
    cout << sum_Of_Digit(n);
    return 0;
}