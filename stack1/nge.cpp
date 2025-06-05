// Pattern: Next greater element
// next greatest element 
// withour using stack using broot force approach
#include<iostream>
#include<vector>
using namespace std;

// Time complexity= o(n^2)
// space complexity = o(n)

vector<int> nsg(vector<int> &v){
    int size= v.size();
    vector<int> res(size, -1);
    for(int i=0; i<size; i++){
        for(int j= i+1; j<size; j++){
            if(v[j] > v[i]){
                res[i]= v[j];
                break;
            }
        }
    }
    return res;
}


int main(){
    vector<int> v={4,3,5,6,2,1,0,3,9,10,8,7,2};
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;
    vector<int> res= nsg(v);
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }cout << endl;

    return 0;
}


// important for interview    
// practice again 