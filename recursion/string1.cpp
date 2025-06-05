// // remove all occurence of 'i' in the given string "Hritik";
#include<iostream>
using namespace std;
string removei(string &s, int idx, int n){
    // base cae
    if(idx==n) return "";
    if(s[idx]=='i') {
        return "" +  removei(s,idx+1,n);
    }
    else {
        return s[idx] + removei(s,idx+1,n);
    }
}
int main(){
    string s="Hritik";
    int n=6;
    string res=removei(s,0,n);
    cout << res;
    return 0;
}