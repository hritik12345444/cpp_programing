// sum natural number of n is input
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout << "enter a number ";
    cin >> n;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout << "sum is :- " << sum;
    return 0;
}