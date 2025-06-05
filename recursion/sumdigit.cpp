// Write a c++ program to implement a reursie funtion to calculate the sum of digits of a given number
#include<iostream>
using namespace std;
int sum_digit(int n){
    // base case
    if(n>=0 && n<=9) return n; // n is defenitly less than 9 and always greater than 0 this why i used && operator 
    int ld=n % 10;
    int ans=ld+ sum_digit(n/10);
    return ans;
}
int main(){
    int n;
    cout << "enter a group of digit of a number : ";
    cin >> n;
    int res= sum_digit(n);
    cout << res << endl;
    return 0;
}