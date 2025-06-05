// Write a program to display multiplication of two matrices entered by the user.
#include<iostream>
using namespace std;
int main(){
    int n,m,p,q;
    cout << "enter row & colum size of 1st matrix : ";
    cin >> n >> m;
    int arr[n][m];
    cout << "enter elements ";
    // 1st matrix element
    for(int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >>arr[i][j]; 
        }
    }
    cout << "enter row & column size of 2nd matrix : ";
    cin >> p >> q;
    int brr[p][q];
    // 2nd matrix element
    cout << "enter eleemtts of 2nd matrix : ";
    for(int i=0; i<p; i++){
        for (int j=0; j<q; j++){
            cin >>brr[i][j]; 
        }
    }
    if(m!=p){
        cout << "multiply is not possible .";
    }
    else{
        // calculate the multiply 
        int res[m][q];
        for(int i=0; i<m; i++){
            for(int j=0; j<q; j++){
                res[i][j]=0;
                for(int k=0; k<n; k++){
                    res[i][j] += arr[i][k]*brr[k][j];
                }
            }
        }
        cout << "The resultent matrix is : " << endl;
         for(int i=0; i<m; i++){
            for (int j=0; j<q; j++){
              cout << res[i][j] << " "; 
            }
            cout << endl;
        }
    }
    return 0;
}
// not hard but before write this code try to dry run on copy 