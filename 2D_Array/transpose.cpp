// transpose a matrix
#include<iostream>
using namespace std;
// 1 2 3
// 4 5 6
// m=3
// n=2
// i=2
// j=1
// 1 4
// 2 5
// 3 6


int main(){
    int n,m;
    cout << "enter no of row & column : ";
    cin >> n >> m;
    int arr[n][m];                         // 2 3
    cout << "enter elemets ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    // transpose
    int ans[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            ans[i][j]=arr[j][i];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
           cout << ans[i][j] << " "; 
        }
        cout << endl;
    }
    return 0;
}
// easy 