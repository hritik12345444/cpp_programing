// A peak element is an element that is strictly greater than its neighbors. Given a 0-indexed integer array nums, find a peak element,
// and return its index. If the array contains multiples peaks, return the index to any of the peaks. You may imagine that nums[-1]=nums[n]
//=-infinitive. In other words, an element is always considered to be strictly greater than a neighbour that is outside the array.
/*input array= [1,2,1,2,6,10,3]
output is either index 1 or index 5 because both are the peak elements */
#include<iostream>
#include<vector>
using namespace std;

int find_peak_index(vector<int> &v){
    int si=0, ei=v.size()-1;
    int n=v.size();
    while(si<=ei){
        int mid = si+(ei-si)/2;
        if(v.size()==1) return 0;
        if(mid==0){
            if(v[mid] < v[mid+1]){
                return mid+1;
            }else{
                return mid;
            }
        }
        else if(mid == n-1){
            if(v[mid] < v[mid-1]){
                return mid-1;
            }else{
                return mid;
            }
        }
        if(v[mid] > v[mid+1] and v[mid] > v[mid-1]){
            return mid;
        }
        else if(v[mid] > v[mid-1]){
            si=mid;
        }
        else{
            ei=mid;
        }
    }
}
int main(){
    int n;
    cout << "enter n ";
    cin >> n;
    vector<int> v(n);
    cout << "enter elements ";
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int res= find_peak_index(v);
    cout << "This is also a peak index " << res << endl;
    return 0;
}