// bubble sort
#include<iostream>
using namespace std;
void bubbleSort(int* arr,int n){
    for(int i=0; i<n-1; i++){
        bool flag=false;
        for(int j=0; j<n; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=true;
            }
        }
        if(flag==false) break;
    }
}
int main(){
    int n;
    cout << "enter n ";
    cin >> n;
    int arr[n];
    // taking input element
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    bubbleSort(arr,n);
    // printing elements
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}