// maximum number find
#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout << "enter numbers ";
    cin >> n1 >> n2 >> n3;
    if(n1>n2 && n1>n3){
        cout << "max is " << n1<< endl;
    }
    else if(n2>n1 && n2 > n3){
        cout << "max is " << n2 << endl;
    }
    else {
        cout << "max iss : " << n3 << endl;
    }
    return 0;
}