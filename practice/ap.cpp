// 4,7,10,13,16... upto n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter n : ";
    cin >> n;
    int i=4;
    while(i<n || i==n){
        cout << i<< " ";
        i+=3;
    }
    return 0;
}