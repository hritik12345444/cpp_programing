//reverse string
#include<iostream>
using namespace std;
string reverse(string s,int i, int n){
    if(i==n) return "";
    return reverse(s,i+1,n) + s[i];
}
int main(){
    string s="hello";
    int size=s.size();
    cout << reverse(s,0,size);
    return 0;
}