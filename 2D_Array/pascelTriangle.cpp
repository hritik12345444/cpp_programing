// pascel trinagle    n=5
// 1
// 1 1 
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> >pasceltrangle(int n){
    vector<vector<int> > pascel(n);
    for(int i=0; i<n; i++){
        // har row ka size 1 se badhana pdega kyuki sbb row me i ka value jitna element hai isliye ek space jada banana hoga

        // resize every row 
        pascel[i].resize(i+1);
        for(int j=0; j<i+1; j++){
            if(j==0 || j==i){
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
    cout << "enter n : ";
    cin >> n;
    vector<vector<int> > ans;
    ans=pasceltrangle(n);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<< ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// complete but focused on resize 