// swap 2 numberr using swap function and also pointer 
#include<iostream>
using namespace std;
void swapfunction (int* a , int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return ;
}
int main(){
    int a,b;
    cout << "enter a : ";
    cin>>a;
    cout << "enter b : ";
    cin >> b;
    swapfunction(&a,&b);
    cout << a  << " "<< b;
    return 0;
}