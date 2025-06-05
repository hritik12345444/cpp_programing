#include<iostream>
using namespace std;
int  main(){
    int n;
    cout << "enter a odd number ";
    cin >> n;
    int nsp=n-1;
    int nst=1;
    // this is for upper triangle 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout << " ";
        }
        nsp--;
        for(int k=1; k<=nst; k++){
            char x=char(k+64);
            cout << x;
        }
        nst+=2;
        cout << endl;
       
    }
    // this is for lower triangle 
    int nsp2=1;
    int nst2=n*2-3;
    for(int i=n+1; i<=(2*n)-1; i++){
        for(int j=1; j<=nsp2; j++){
            cout << " ";
        }        
        nsp2++;
        for(int k=1; k<=nst2; k++){
            cout << char(k+64);
        }
        nst2-=2;
        cout << "\n";
    }
    return 0;
}  
// code completer but repeat it because it take a lot of time for logic and very hard logic use in this code 