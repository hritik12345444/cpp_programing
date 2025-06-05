// a raised to power b 
#include<iostream>
using namespace std;
int main(){
    int a, b,res=1;
    cout << "enter value of a ";
    cin >> a;
    cout <<  "enter value of b ";
    cin >> b;
    for(int i=1; i<=b; i++){
        res=res*a;
    }
    cout << "a raised to power b is " << res;
    return 0;
}