// Implement a recursive function to find the length of a string
#include<iostream>
using namespace std;
int length(string s,int idx){
    // base case
    if(s[idx]=='\0') return 0;
    static int res= 0;
    if(s[idx]!=0) res++;
    length(s,idx+1);
    return res;
}
int main(){
    string str;
    cout << "enter a string ";
    cin >> str;
    int res= length(str,0);
    cout << res << endl;
    return 0;
}