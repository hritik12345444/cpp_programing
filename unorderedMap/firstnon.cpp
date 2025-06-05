// find the first non-repeating element in an array
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){

    vector<int> v={1,2,2,3,1,4};

    unordered_map<int,int> m;
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }

    for(int num : v){
        if(m[num] == 1){
            cout << num << endl;
            break;
        }
    }


    return 0;
}