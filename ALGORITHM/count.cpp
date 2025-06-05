// count sort in array

#include<iostream>
using namespace std;
void countSort(int arr[], int n){

    // findind maximum element in array 

    int max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    // create a frequency array 

    int fre[10]={0};             
    for(int i=0; i<n; i++){         
        fre[arr[i]]++;
    }

    // updating the frequency array

    for(int i=1; i<max+1; i++){
        fre[i]+=fre[i-1];
    }

    // create a ans array 

    int ans[n];
    for(int i=0; i<n; i++){            
        ans[--fre[arr[i]]]=arr[i];
    }

    // copy the ans array's elements to original array

    for(int i=0; i<n; i++){
        arr[i]=ans[i];
    }
}
int main(){
    int n;
    cout << "enter  n \n";
    cin >> n;
    int arr[n];
    cout << "enter elements of array \n";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    countSort(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// not working properly
