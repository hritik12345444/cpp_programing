// Create a recursive function to reverse the string 
#include<iostream>
using namespace std;
string reverse(string str,int len){
    // base cae
    if(len<0) return "";
    string ans=str[len] + reverse(str,len-1);
    return ans;
}
int main(){
    string str="hritik";
    int length_Of_String=str.length();
    string res=reverse(str,(length_Of_String-1));
    cout << res;
    return 0;
}