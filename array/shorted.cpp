// Check the given array is sorted or not 
#include<iostream>
using namespace std;
int main(){
    int x=0;
    int arr[]={2,3,5,6,7,8,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<size-1){
        if(arr[i]>arr[i+1]){
            x=1;
        }
        i++;
    }
    if(x==0 ){
        cout << "given array is sorted ";
    }
    else cout << "given array is not sorted ";
    return 0;
}
