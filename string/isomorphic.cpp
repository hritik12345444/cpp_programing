// check the string is isomorphic or not
#include<iostream>
#include<string>
#include<vector>
using namespace std; 
bool isomorphic(string s1, string s2){
    int n= s1.size();
    vector<int> v1(128,-1);// v1 me s1 ka sbb element ko fill krne ke liye
    vector<int> v2(128,-1);// v2 me s2 ka sbb element ko fill krne ke liye
    for(int i=0; i<n; i++){
        if(v1[s1[i]] != v2[s2[i]]){
            return false;
        }else{
            v1[s1[i]] = v2[s2[i]] = i;
        }
    }
    return true;
}
int main(){
    string s1,s2;
    cout << "enter s1 and s2\n";
    cin >> s1 >> s2;
    if(isomorphic(s1,s2)){
        cout<< "yes this is isomorphic"; 
    }else{
        cout << "not isomorphic";
    }
    return 0;
}
// this is important topic i didn't understand now properly 
// study map concept from youTube