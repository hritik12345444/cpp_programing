// programe to find power of a number 
#include<iostream>
using namespace std;
int power(int a, int b){
    // base case
    if(b==0) return 1;
    int res= a*power(a,b-1);
    return res;
}
int main(){
    int a,b;
    cout << "enter a ";
    cin >> a;
    cout << "enter b ";
    cin >>b;
    int res=power(a,b);
    cout << a << " raised to power " << b << " is " << res;
    return 0;
}
// this is first method for find the power
// try for another method to find the power 