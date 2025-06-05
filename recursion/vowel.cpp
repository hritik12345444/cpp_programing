// Count the number of vowel in string 
#include<iostream>
using namespace std;
int countvowel(string &s, int idx, int n){
    if(idx==n) return 0;
    static int res=0;
    if(s[idx]=='a'|| s[idx]=='e' || s[idx]=='i' || s[idx]=='o' || s[idx]=='u') {
        return res+1 + countvowel(s,idx+1,n);
    }
    else{
        return countvowel(s,idx+1,n);
    }
}
int main(){
    string s="abcdefghijklmnopqrstuvwxyz";// -> total alphabet letter
    int n=26;
    int res= countvowel(s,0,n);
    cout << res;
    return 0;
}