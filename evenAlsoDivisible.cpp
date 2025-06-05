// wap to print even and divisible by 3.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a number ";
    cin >> n;
    if(n%2==0 && n%3==0){
        cout << "even & also divisible by 3 "<< endl;
    }
    else cout << "not this ";
    return 0;
}