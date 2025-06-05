// claculate the size of array 
#include<iostream>
using namespace std;
int main(){
    int arr[]={3,2,6,4,6,5,6,9},size=0;
    int Size= sizeof(arr)/sizeof(arr[0]);
    cout << Size << endl;
    return 0;
}