/* Given n integers (can be duplicates). Print the second smallest integer.
if it does not exist, print -1.

    INPUT n=4
    1 2 2 -4
    OUTPUT: 1

    INPUT n=5
    1 2 3 1 1
    OUTPUT: 2
*/

#include<iostream>
#include<set>
#include<vector>
using namespace std;

int smallestInteger(vector<int> v){
    set<int> s;
    for(int ele:v){
        s.insert(ele);
    }

    set<int>::iterator itr;  // declear a iterator for set
    itr=s.begin();   // initialize itr to first element of set
    advance(itr,1);   // move by 1 step forward 
    return *itr;   // return 2nd element from set which is 2nd smallest integer in our set
    
}

int main(){

    int n;
    cout << "enter n :" ;
    cin >> n;
    vector<int> v(n);
    cout << "enter elements:";
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    cout << smallestInteger(v) << endl;
    return 0;
}


/// WORKING