//  basic calculator (+,-,/,*);
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout << "enter value of a and b "<< endl;
    cin >> a >> b;
    cout << "enter operator ";
    cin >> ch ;
    if(ch=='+'){
        cout << (a+b) << endl;
    }
    else if(ch=='-'){
        cout << (a-b) << endl;
    }
    else if (ch=='*'){
        cout << (a*b) << endl;
    }
    else if (ch=='/'){
        cout << (float(a)/b) << endl;
    }
    else cout << "invalid operator ";
    return 0;
} 