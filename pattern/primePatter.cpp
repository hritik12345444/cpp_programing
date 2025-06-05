// print a triangle of prime numbers upto given number of lines of the tirangle 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter a number of lines ";
    cin >> n;
    int nsp=n-1;
    int x=2;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout << " ";
        }
        nsp--;
        int check=1;
        for(int k=1; k<=i; k++){
            for(int j=2; j<=x/2; j++){
                if(x % j==0){
                    check=0;
                }
                else check=1;
            }
            if(check==1){
                cout << x << " ";
            }
            x++;
        }
        cout << endl;
    }
    return 0;
}
// not working