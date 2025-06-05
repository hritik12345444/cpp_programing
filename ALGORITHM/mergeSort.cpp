#include<iostream>
using namespace std;
void mergeInOneArray(int arr[],int si, int mid, int ei){
    int an=mid-si+1;
    int bn=ei-mid;
    int a[an];
    int b[bn];
    for(int i=0; i<an; i++){
        a[i]=arr[si+i];
    }
    for(int j=0; j<bn; j++){
        b[j]=arr[mid+1+j];/////
    }
    int i=0;
    int j=0;
    int k=si;////
    while(i<an and j<bn){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else {
            arr[k++]=b[j++];
        }
    }
    while(i<an){
        arr[k++]=a[i++];
    }
    while(j<bn){
        arr[k++]=b[j++];
    }
    return;
}
void mergesort(int arr[],int si, int ei){
    // base case
    if(si>=ei) return;
    int mid=(si+ei)/2;
    mergesort(arr,si,mid);
    mergesort(arr,mid+1,ei);
    mergeInOneArray(arr,si,mid,ei);
    
}
int main(){
    int n;
    cout << "enter n \n";
    cin >> n;
    int arr[n];
    cout << "enter elements\n";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout << arr[i]<< " ";
    }cout << endl;
    return 0;
}