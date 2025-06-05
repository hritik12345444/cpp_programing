#include<iostream>
using namespace std;
int main(){
    int n,nst=1;
    cout <<"enter a numberr ";
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int k=1; k<=nst; k++){
            cout << '*';
        }
        cout << endl;
        nst+=2;
    }
    return 0;
}