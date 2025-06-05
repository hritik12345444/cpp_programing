#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool flag=true;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            flag=false;
        }
    }
    if(flag==true) {
        cout << "prime ";
    }
    else {
        cout << "not prime ";
    }
    return 0;
}