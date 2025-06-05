#include<iostream>
using namespace std;
int main(){
    int n,nst=1;
    cout << "enter a number ";
    cin >> n;
    int nsp=n-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout << " ";
        }
        nsp--;
        for(int k=1; k<=nst; k++){
            cout << k;
        }
        nst++;
        for(int m=i-1; m>=1; m--){
            cout << m;
        }
        cout << endl;
    }
    return 0;
}