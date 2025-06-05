// Find the unique number in a given array where all the elements are being repeated twice with one value being unique.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v={1,2,3,3,2,1,5};
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            // agar v[i]==v[j] hua to dono ka value ko change krr ke -1 krr denge aur badh me sbb -1 hojayega bss ek element bach jayega jo ki unique hoga.
            
            if(v[i]==v[j]){
                v[i]=v[j]=-1;
            }
        }
    }
    for(int i=0; i<v.size(); i++){
        if(v[i]>-1){
            cout << v[i];
        }
    }
    return 0;
}