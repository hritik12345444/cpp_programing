// Given an array of n integers and a target value x. Print whether x exists in the array or not.
#include<iostream>
using namespace std;
bool search(int arr[], int idx, int x){
    // base case
    if(idx==8) return false;
    if(arr[idx]==x){
        return true;
        
    }
    else return search(arr,idx+1,x);
}
int main(){
    int arr[]={2,12,54,14,3,8,6,1};
    int x;
    cout << "enter x ";
    cin >> x;
    bool flag= search(arr,0,x);
    if(flag==true) cout << "yes";
    else cout << "no";
    //cout << flag;
    return 0;
}