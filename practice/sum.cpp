// function  sum
#include<iostream>
using namespace std;
int sum(int n){
    int res=0;
    while(n!=0){
        int ld=n%10;
        res+=ld;
        n/=10;
    }
    return res;
}
int main(){
    int n;
    cin >> n;
    int res=sum(n);
    cout << res;
    return 0;
}