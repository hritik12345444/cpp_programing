/* Can you make the strigs equal?
    Given an array of strings. You can move any number of characters from one string to any otehr string any number of times. You just have to make all of them equal.alignasPrint "yes" if you can make every string in the array equal by using any number of operations otherwise print "no"

    INPUT ["collegeee", "coll", "collegge"]    OUTPUT: Yes
    INPUT ["wall",oh],"wallahah"]   OUTPUT: No
*/

#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;


bool canMakeEqual(vector<string> &v){
    int n= v.size();  // no. of strings in vector

    map<char,int> m;  // store charector and frequency of each charactor
    for(auto word:v){
        for(char ch:word){
            m[ch]++; // insert in map and increment its value by 1 if not present already else only increment the value
        }
    }

    for(auto pair:m){
        if(pair.second%n!=0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "enter n";
    cin >> n;
    vector<string> v(n);
    cout << "enter a vector of string ";
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    // cout << canMakeEqual << endl;
    // // canMakeEqual ? cout << "yes" : cout << "no" << endl;

    cout << (canMakeEqual(v) ? "yes" : "No") << endl;

    return 0;
}

// working