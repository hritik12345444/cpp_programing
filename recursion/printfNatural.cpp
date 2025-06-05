// print natural no 1 to n using recursion 
#include<iostream>
#include<vector>
using namespace std;
void natural(int n, vector<int> &v){
    // base case
    if(n==0) return;
    natural(n-1,v);
    v.push_back(n);
    return;
}
int main(){
    int n;
    vector<int> v;
    cout << "enter n ";
    cin >> n;
    natural(n,v);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
    return 0;
}