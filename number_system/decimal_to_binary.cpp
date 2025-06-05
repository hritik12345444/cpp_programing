// convert decimal to binary
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a decimal number ";
    cin >> n;
    int ans=0;
    int binary=1;
    while(n>0){
        int pairity_digit=n%2;
        ans=ans+(pairity_digit*binary);
        n=n/2;
        binary=binary*10;
    }
    cout << ans<< endl;
    return 0;
}
// try it again