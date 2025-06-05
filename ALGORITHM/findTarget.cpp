// search element in rotated sorted array with duplicate elements. Return 1 if the element is found, else return
// 0
#include<iostream>
#include<vector>
using namespace std;
int findTargetInRotatedSortedArray(vector<int> &v, int target){
    int si=0, ei=v.size()-1;
    while(si<ei){
        if(v[si]==target) return si;
        if(v[si]==v[ei]){
            si++;
            ei--;
        }
        int mid=si+(ei-si)/2;
        if(v[mid]==target) return mid;
        if(v[mid]>target){
            ei=mid-1;
        }
        else{
            si=mid+1;
        }

    }
    return -1;
}
int main(){
    int n;
    cout << "enter n ";
    cin >> n;
    vector<int> v(n);
    cout << "enter element ";
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int target;
    cout << "enter target ";
    cin >> target;
    int res=findTargetInRotatedSortedArray(v,target);
    cout << res;
    return 0;
}