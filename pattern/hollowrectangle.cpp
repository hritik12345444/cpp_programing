#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout << "enter no of row and column ";
    cin >> row >> col;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(i==1 || i==row || j==1 || j==col){
                cout << j;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}