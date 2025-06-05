// Given a mountain array 'a' of length greater than 3, return the index 'i' such that arr[0]<arr[1]<... < arr[i-1] < arr[i] > arr[i+1] > 
//... > arr[arr.length - 1]. This index is known as the peak index
/*arr[]={0,4,1,0}
ans= index 1*/
#include<iostream>
#include<vector>
using namespace std;

int find_peak_element(vector<int> &v){
    int si=0, ei=v.size()-1;
    while(si<=ei){
        int mid=si+(ei-si)/2;
        if(v[mid] > v[mid-1] and v[mid] > v[mid+1]){
            return mid;
        }
        else if(v[mid] > v[mid-1]){
            si=mid;
        }
        else if(v[mid] > v[mid+1]){
            ei=mid;
        }
    }
}

int main(){
    int n;
    cout << "enter n ";
    cin >> n;
    vector<int> v(n);
    cout << "enter elements " << endl;
    for(int i=0; i<n; i++){
        cin >> v[i]; 
    }
    int res= find_peak_element(v);
    cout << "The index of peak element is :-  " << res  << endl;
    cout << "And, the element at the peak index is :- " << v[res] << endl << endl;
    return 0;
}
