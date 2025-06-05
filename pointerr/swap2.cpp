// swap 2 number wihtout using 3rd variable
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "enter a ";
    cin >> a;
    cout << "enter b ";
    cin >> b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "value of a " << a << endl;
    cout << "value of b " << b ;
    return 0;
}