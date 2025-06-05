// swap 0 at the end
#include<iostream>
#include<vector>
using namespace std;
void remove0(vector<int> &v){
    int n=v.size();
    for(int i=n-1; i>=0; i--){
        int j=0;
        bool flag=false;
        while(j!=i){
            if(v[j]==0 and v[j+1]!=0){
                swap(v[j],v[j+1]);
                flag=true;
            }
            j++;
        }
        if(flag==false) break;
    }
    return;
}
int main(){
    vector<int> v={0,0,5,6,0,7};
    remove0(v);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}