// Given Q questions, check if the given number is presentt in the array or not.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v={2,3,4,5,6,9,7};
    int n;
    bool flag=false;
    cout << "enter n ";
    cin >> n;
    // code working for check the number is present or not 
    for(int i=0; i<v.size(); i++){
       if(v[i]==n){
        flag=true;
       }
    }
    if(flag==true){
        cout << "yes ";
    }
    else cout << "not ";
    return 0;
}