// Given a array of string find the common prefix from them.
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
string commonprefix(vector<string> &v){
    sort(v.begin(),v.end());
    string s1= v[0];
    string s2=v[v.size()-1];
    string ans="";
    for(int i=0; i<s1.size(); i++){
        if(s1[i]==s2[i]){
            ans += s1[i];
        }else{
            break;
        }
    }
    return ans;
}
int main(){
    int n;
    cout << "enter number of string ";
    cin >> n;
    vector<string> v(n);
    cout << "enter strigns \n";
    for(int i= 0; i<n; i++){
        cin >> v[i];
    }
    string ans=commonprefix(v);
    cout <<"this is your answer string :- " << ans << endl;
    return 0;
}