// // count the number of occurrences of a particular elementt x.
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int n=5,occurence=0,i=0;
    int x;
    cout << "enter x ";
    cin >> x;
    // taking input by user using for_each_loop.

    // for(int &ele : arr){
    //     cout << "enter " << i << " element " << endl;
    //     cin >> ele;
    //     i++; 
    // }

    // taking input by for loop
    
    for(int i=0; i<n; i++){
        cout << "enter elements ";
        cin >> arr[i];
    }
    // count occurence
    for(int ele : arr){
        if(ele==x){
            occurence++;
        }
    }
    cout << "your input array is : ";
    // print the array
    for(int ele : arr){
        cout << ele << " ";
    }
    cout << endl;
    // print no same element present in the given array
    cout << "no of occurence of " << x << " in the given array is " << occurence << endl;
    return 0;
}
