#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int main(){
    int a,b;
    cout << "enter a & b ";
    cin >> a >> b;
    int res= sum(a,b);
    cout << res << " is the answer ";
    return 0;
}