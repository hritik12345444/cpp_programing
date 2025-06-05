// Given an n*m matrix 'a', return all elemnts of the matrix in spiral order.
// 1 2 3       1 2 3
// 4 5 6 -->>  6 9 8
// 7 8 9       7 4 5
#include<iostream>
#include<vector>
using namespace std;
void spiralorder(vector<vector<int> >&v){
    int top=0;
    int bottom=v.size()-1;
    int left=0;
    int right=v[0].size()-1;
    int direction=0;
    while(top<=bottom || left<=right){
        if(direction==0){
            for(int col=left; col<=right; col++){
                cout<< v[top][col]<< " ";
            }
            
            top++;
        }
        else if(direction==1){
            for(int row=top; row<=bottom; row++){
                cout << v[row][right] << " ";
            }

            right--;
        }
        else if(direction==2){
            for(int col=right; col>=left; col--){
                cout << v[bottom][col]<<" ";
            }
         
            bottom--;
        }
        else{
            for(int row=bottom; row>=top; row--){
                cout << v[row][left] << " ";
            }
            left++;
   
        }
        direction=(direction+1)%4;
    }
    return ;
    
}
int main (){
    int n,m;
    cout << "enter size of matrix n*m : ";
    cin >> n>> m;
    vector<vector<int> >v(n,vector<int>(m));
    cout << "enter elements of matrix : "<< endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> v[i][j];
        }
    }

    cout << endl;
    
    spiralorder(v);
    return 0;
}
// focus on it