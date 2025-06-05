// sort an array consisting of only 0s and 1s.
#include<iostream>
#include<vector>
using namespace std;
void zeroOnesVector(vector <int> &v){
    int first_idx=0;
    int last_idx=v.size()-1;
    while(first_idx < last_idx){
        if(v[first_idx] == 1 && v[last_idx] == 0){
            v[first_idx]=0; 
            v[last_idx]=1;
            first_idx++;
            last_idx--;
        }
        if(v[last_idx]==0 || v[first_idx]==0 ){
            first_idx++;
        }
        if(v[last_idx]==1 || v[first_idx] == 1){
            last_idx--;
        }
    }
    return;
}
int main(){
    int n;
    cout << "enter size of vector  ";
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++){
        int ele;
        cout << "enter elements of vector ";
        cin >> ele;
        v.push_back(ele);
    }
    zeroOnesVector(v);
    for(int ele : v){
        cout << ele << " ";
    }
    cout << endl;
    return 0;
}
// not hard but focus on it