// odd even
#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number ";
    cin >> num;
    if(num % 2==0){
        cout << "even"<< endl;
    }
    else cout << "odd" << endl;
    return 0;
}