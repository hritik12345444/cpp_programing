// calculate the sum of all the element in the given array
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int sum=0;
    // Taking input of array by user 
    for(int i=0; i<=4; i++){
        cout << "enter " << i << " element " << endl;
        cin >> arr[i];
    }
    // sum all the element present in the given array 
    for(int i=0; i<=4; i++){
        sum+=arr[i];
    }
    cout << "your given array is ";
    // print the given array 
    for(int i=0; i<=4; i++){
        cout << arr[i] << " ";
    
    }
    // print the sum of the given array
    cout << endl << "sum of the given array is " << sum;
    return 0;
}