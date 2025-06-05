// binary search
// In binary search over all array is sorted.
#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>&arr, int target){
    int size=arr.size();
    int si=0, ei=size-1;
    while(si<=ei){
        int mid=si+(ei-si)/2;
        if(arr[mid]==target){
            return mid;
            break;
        }
        else if(arr[mid]<target){
            si=mid+1;
        }
        else{
            ei=mid-1;
        }
    }
}
int main(){
    vector<int>arr={2,3,4,5,6,7,9,11,13};  
    int target=11;
    int result =binarysearch(arr,target);
    cout << result;
    
    return 0;
}