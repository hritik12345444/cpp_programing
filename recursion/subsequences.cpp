// Given a string, we have to find out all its subsequnces of it. A string is a subsequence of a given string, 
//that is generated by deleting some charater of a given string without changing its order.
#include<iostream>
#include<vector>
#include<string>
using namespace std;
void subsequence (string &str, int i, int size,string res, vector<string> &ans){
    // base case
    if(i==size){
        ans.push_back(res);
        return ;
    }

    subsequence(str,i+1,size,res+str[i],ans) ;
    subsequence(str,i+1,size,res,ans);
    return;
    
}
int main(){
    string s="abc";
    int x=s.length();
    vector<string> ans;
    subsequence(s,0,x,"",ans);
    for(int i=0; i<=sizeof(ans); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
// very very important 