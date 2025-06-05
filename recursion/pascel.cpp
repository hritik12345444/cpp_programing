// pascel
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > pascel(int n){
    vector<vector<int> > v(n);
    for(int i=0; i<n; i++){
        v[i].resize(i+1);
        for(int j=0; j<i+1; j++){
            if(j==0 or j==i){
                v[i][j]=1;
            }
            else{
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }
    return v;
}
int main(){
    int n;
    cout << "enter n ";
    cin >> n;
    vector<vector<int> > v;
    v=pascel(n);
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}