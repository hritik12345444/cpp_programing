// Find the sum of the values of the array [2,3,5,20,1].
#include<iostream> 
using namespace std;
int sum(int arr[], int idx, int n){
    // base case
    if(idx==n-1) return arr[idx];
    int res=arr[idx] + sum(arr,idx+1, n);
    return res;
}
int main(){
    int n;
    cout << "enter size of array "; // taking size of array
    cin >> n;
    int arr[n];
    cout << "enter elements of array "; // taking elements of array 
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int idx;
    cout << "enter index number for sum "; // taking idx number for sum of arr[idx] to last_element
    cin >> idx;
    int res= sum(arr,idx,n);
    cout << res << endl;
    return 0;
}