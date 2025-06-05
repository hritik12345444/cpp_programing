// count frequency of elemet in an array
#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main(){

    vector<int> v={1,2,2,3,1};
    unordered_map<int , int> m;

    for(int i=0; i<v.size(); i++){
        m[v[i]]++;
    }


    // unordered_map<int,int> :: iterator itr;
    for(auto pair: m){
        cout << pair.first << "->" << pair.second<< endl;
    }

    return 0;
}