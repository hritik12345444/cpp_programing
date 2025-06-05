// implementation of unordered map
#include<iostream>
#include<unordered_map>
using namespace std;
int main(){

    unordered_map<int,string> m={{1,"suman"},{2,"amana"},{3,"pradeep"}};

    m.insert(make_pair(6,"shubahm"));
    m[1]="hritik";
    m.insert(make_pair(2,"shatrudhan"));
    for(auto pair: m){
        cout << pair.first << "-" << pair.second << endl;
    }

    return 0;
}