// pascel
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> >pasceltriangle(int n){
    vector<vector<int> > pascel(n);
    for(int i=0; i<n; i++){
        pascel[i].resize(i+1);      // resize beacuse 1st row me element dalne ke liye space hi nhi hai kyuki i=0; hai isiliye i ko i+1 krr diye hai 
        for(int j=0; j<=i; j++){
            if(j==i || j==0){
                pascel[i][j]=1;
            }
            else{
                pascel[i][j]=pascel[i-1][j]+pascel[i-1][j-1];
            }
        }
    }
    return pascel;
} 
int main(){
    int n;
    cout<< "enter size of array ";
    cin >> n;
    vector<vector<int> > ans;
    ans=pasceltriangle(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}