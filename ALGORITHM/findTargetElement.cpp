// Given the rotated sorted array of integers, which contains distinct elements, 
//and an integer targert, return the indix of targer if it is in the array. Otherwise 
//return -1.

/*Time :- o(logn)
space :- o(1)*/

#include<iostream>
#include<vector>
using namespace std;

int indexOfTarget(vector<int>&v, int target){
    int si=0, ei=v.size()-1; // initialise starting or ending index
    if(v[si]>v[ei]){ // true for rotated sorted array
        while(si<=ei){ 
            int mid=si+(ei-si)/2; // calculate mid
            if(v[mid]==target) return mid; // if mid == target than return mid
            if(v[mid]>target && v[si]<=target){ 
                ei=mid-1;
            }else if (v[si]>target ){
                si=mid+1;
            }
            else if (v[mid]<target){
                si=mid+1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cout << "enter n \n";
    cin >> n;
    vector<int> v(n);
    cout << "enter elements \n";
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int target;
    cout << "enter target \n";
    cin >> target;
    int res=indexOfTarget(v,target);
    cout << res << endl;
    return 0;
}