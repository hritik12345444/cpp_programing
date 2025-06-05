// factorial till n 
#include<iostream>
using namespace std;
void factorialof(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
        cout << "factorial of "<<i<< " is : " << fact << endl;
    }
}
int main(){
    int n;
    cout << "enter number as you want to factorial : ";
    cin >> n;
    factorialof(n);
    return 0;
}