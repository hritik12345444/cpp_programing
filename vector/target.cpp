// Given a vector arr[] sorted in increasing oeder of n size and an integer x, find if there exists a pair in the array whose sum is exactly x.
#include<iostream>
#include<vector>
using namespace std;
// n=6
// x=6
// right_ptr=4
// res=8
// left_ptr=0
// i=2

int main(){
    vector<int> arr{1,2,3,4};
    //        idx = 0,1,2,3,4,5,6
    int n=arr.size()-1;
    int x;
    cout << "enter x : ";
    cin >> x;
    int right_ptr=n;
    int left_ptr=0;
    bool flag=false;
    for(int i=0; i<n; i++){
        if(arr[right_ptr]+arr[left_ptr]==x){
            // agar pair mil gya to flag ko true krr denge brana flag false hi rhega 
            flag=true;
            break;
        }
        if(arr[right_ptr]+arr[left_ptr]>x){
            // agar sum is more than x , then right_ptr ko ek se minus krr denge taki next time pluse krne per abhi ke mukable value kam aaye 
            right_ptr--;
        }
        if(arr[right_ptr]+arr[left_ptr]<x){
            left_ptr++;
        }
    }
    if(flag==true){
        cout << "yes, it is present ";
    }
    else cout << "No, it is not present ";
    return 0;
}
// not hard good question 