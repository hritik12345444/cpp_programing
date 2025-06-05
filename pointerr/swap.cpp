// swap using pointer
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "entter value a : ";
    cin >> a;
    cout << "enter value of b : ";
    cin >>b;
    int* ptr1=&a;
    int* ptr2=&b;
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    cout <<"value of a "<<  a << endl << "value of b"<< " " << b;
    return 0;
}
// concept