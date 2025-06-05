// Quick sort  
#include<iostream>
using namespace std;
int pivot(int arr[],int si, int ei){
    int pi_el=arr[ei];
    int i=-1;
    for(int j=0; j<ei; j++){
        if(arr[j]<pi_el){
            i++;
            if(i!=j){       
                swap(arr[i],arr[j]);
            }
        }
    }
    i++;
    swap(arr[i],arr[ei]);
    return i;
}
void quickSort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int pi_idx=pivot(arr,si,ei);
    quickSort(arr,si,pi_idx-1);
    quickSort(arr,pi_idx+1,ei);
    return;
}
int main(){
    int n;
    cout << "enter n \n";
    cin >> n;
    int arr[n];
    cout << "enter elements of arrya \n";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout << arr[i]<< " ";
    }cout << endl;
    return 0;
}


