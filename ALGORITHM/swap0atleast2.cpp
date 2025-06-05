// swap 0 to the end of the given array
#include<iostream>
#include<vector>
using namespace std;
void moveZeroToTheEnd(vector<int> &v){
    int n=v.size();
    for(int i=0; i<n-1; i++){
        bool flag=false;
        for(int j=0; j<n-1; j++){
            if(v[j]==0 and v[j+1]!=0){
                swap(v[j],v[j+1]);
                flag=true;
            }
        }
        if(flag==false) break;
    }
    return;
}
int main(){
    vector<int> v={0,5,0,3,0,0};
    moveZeroToTheEnd(v);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " "; 
    }
    return 0;
}