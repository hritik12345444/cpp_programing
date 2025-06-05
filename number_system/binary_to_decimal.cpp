// convert binary to decimal
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a binary number ";
    cin >> n;
    int power=1;
    int ans=0;
    while(n>0){
        int ld=n%10;
        ans=ans+(ld*power);
        power*=2; // power me 2 se multiply krr rhe hai kyuki agli bar last digit ko 2 ke power 2 se guna kra hai fir 2 ke power 3 ....
        n/=10;
    }
    cout << ans << endl;
    return 0;
}
// try it again