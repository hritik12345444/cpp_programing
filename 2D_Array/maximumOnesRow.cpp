// Given a boolean 2-D Array, where each row is sorted . Find the row with maximum ones.
#include<iostream>
#include<vector>
using namespace std;
int maximumrow(vector<vector<int> > &v){
    int jth_position=0;
    int rownum=0;
    for(int column=v[0].size()-1; column>=0; column--){
        if(v[0][column]==1){
            jth_position=column;
            rownum=0;
        }else{
            break;
        }
    }
    for(int i=1; i<v.size(); i++){
        for(int j=jth_position-1; j>=0; j--){
            if(v[i][j]==1){
                jth_position=j;
                rownum=i;
            }
            else {
                break;
            }
        }
    }
    return rownum;
}
int main(){
    int n,m;
    cout<< "enter rows : ";
    cin >> n;
    cout << "enter column : ";
    cin >> m;
    vector<vector<int> > v(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> v[i][j];
        }
    }
    int ans=maximumrow(v);
    cout << "maximum row is : " << ans << endl;
    return 0;
}