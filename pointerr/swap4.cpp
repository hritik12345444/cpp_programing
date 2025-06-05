// DEVELOP A C++ PROGRAM THAT SWAPS THE VALUES OF TWO VARIABLES USING POINTERS RATHER THAN DIRECTLY MANUPULATING THE VARIABLES
#include<iostream>
using namespace std;
void swap(int* a, int* b){
    int temp=*b;
    *b=*a;
    *a=temp;
    return ;
}
int main(){
    int a,b;
    cout << "enter a ";
    cin >> a;
    cout << "enter b ";
    cin >> b;
    swap(&a,&b);
    cout << a << " " << b;
    return 0;
}