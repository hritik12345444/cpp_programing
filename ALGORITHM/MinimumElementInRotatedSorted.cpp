// A rotated sorted array array is a sorted array on which rotation operation has been
// performed some number of times. Given a rotated sorted array. Find the index of the
// minimum element in the array. Follow 0-based indexing. It is guaranteed that all the
// elements in that all the elements in the array are unique.
#include<iostream>
#include<vector>
using namespace std;

int smallestElementIndex(vector<int> &v){
    int si=0, ei=v.size()-1; // mention starting or ending point
    if(v[si]<v[ei]) return si; // check array is sorted or not if sorted than return v[0]
    else{             // this condition het when array is rotated sorted array
        while(si<ei){  // when si == ei, than the minimum elements is pointed by si
            int mid=si+(ei-si)/2; // calculate mid
            if(v[mid]>v[ei]){
                si=mid+1;
            }else{
                ei=mid;
            }
        }
    }
    return si;
}
int main(){
    int n;
    cout << "enter n ";
    cin >> n;
    vector<int> v(n);
    cout << "enter elements\n";
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int res= smallestElementIndex(v);
    cout << res << endl;
    return 0;
}