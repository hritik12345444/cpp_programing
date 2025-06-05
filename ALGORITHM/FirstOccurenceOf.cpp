// find te fist occurence of a given element x, given that the gien array is sorted. 
//If no occurence of x is found than return -1
#include<iostream>
#include<vector>
using namespace std;
int firstOccurence(vector<int> &arr, int x){
    int size=arr.size();
    int si=0, ei=size-1;
    int ans=-1;
    while(si<=ei){
        int mid=si+(ei-si)/2;
        if(arr[mid]==x){
            ans=mid;
            ei=mid-1;
        }
        else if(arr[mid]<x){
            si=mid+1;
        }
        else{
            ei=mid-1;
        }
    }
}
int main(){
    vector<int> arr={2,5,5,5,6,6,8,9,9,9};
    int target=6;
    int res= firstOccurence(arr,target);
    cout << res;
    return 0;
}