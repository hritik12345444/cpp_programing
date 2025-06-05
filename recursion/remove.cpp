// Write a recursive function to remove all spaces from a string
#include<iostream>
using namespace std;
string removespace(string s,int idx, int len){
    // base case
    if(idx > len) return "";
    string ans="";
    if(s[idx]==' '){
        ans+= removespace(s,idx+1,len);
    }
    else {
        ans+= s[idx] + removespace(s,idx+1,len);
    }
    return ans;
}
int main(){
    string str="Happy boy";
    int len= str.length();
    string res=removespace(str,0,len-1);
    cout << res;
    return 0;
}