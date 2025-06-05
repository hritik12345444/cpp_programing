// power calculation
#include<iostream>
using namespace std;
int pow(int a, int b){
    // base case
    if(b==0) return 1;
    return pow(a,b-1) * a;
}
int main(){
    int a,b;
    cout << "enter a & b";
    cin >> a >> b;
    cout << "a raised to b is " << pow(a,b);
    return 0;
}