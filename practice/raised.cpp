// two number find the value of one number raised to the power of another
#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int pow=1;
    for(int i=1; i<=b; i++){
        pow=pow*a;
    }
    cout << pow << endl;
    return 0;
}