// Count the number off digits for a given number n
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout << "enter a group of no.digit ";
    cin >>n;
    if(n==0) cout << "no of digit is 1" << endl;
    else {
        while(n!=0){
        count++;
        n=n/10;
    }
    cout <<"no of digit is : " << count;
    }
    return 0;
}