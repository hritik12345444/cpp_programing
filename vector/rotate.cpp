// Rotate the given array 'a' by k steps, where k is non-negative. Note: k can be greater than n as well where n is the size of array.
#include<iostream>
#include<vector>
using namespace std;
void rotate(){}
int main(){
    vector <int> v={1,2,3,4,5};          // 5 4 3 2 1
    int n=5;
    int k;
    cout << "enter k ";
    cin >> k;
    k%=n;

    for(int i=0,j=4; i<j; i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    for(int i=0,j=k-1; i<j; i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    for(int i=k,j=n-1; i<j; i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    return 0;
}