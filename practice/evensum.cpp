// print sum of all the even digits of a ginven number        n= 012457086
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a group of digit : ";
    cin >> n;
    int sum=0;
    while(n!=0){
        int l_d=n%10;
        if(l_d % 2==0){
            sum+=l_d;
        }
        n=n/10;
    }
    cout << sum;
    return 0;
}