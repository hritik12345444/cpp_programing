// selection sort alogrithm
// this sorting algorithm is not valid for 0 elements
#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int> &v){
    int n=v.size();
    for(int i=0; i<n; i++){
        bool flag=false;
        // let suppose the ith element is smalllest no
        int cur_idx=i;
        // find the smallest element in the vector
        for(int j=i+1; j<n; j++){
            if(v[j]<v[cur_idx]){
                cur_idx=j;
                flag=true;
            }
        }
        // swap the element of smallest element and v[i]
        if(cur_idx!=i){
            swap(v[cur_idx],v[i]);
        }
        if(!flag) break;
    }
}
int main(){
    int n;
    cout << "enter n\n";
    cin >> n;
    vector<int> v(n);
    cout << "enter elements ";
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    selectionSort(v);
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    } cout << endl;
    return 0;
}