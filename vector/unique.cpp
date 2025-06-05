// Given a vector arr[] sorted in increasing order of n size and an integer x, find the number of unique pair that exist in the array 
//whose absolute sum is exactly x.
#include<iostream>
#include<vector>
using namespace std;
// n=5
// x=5
// left_ptr=2
// right_ptr=1
// noOfPair =2


int main(){
    vector<int> v{2,2,2};
    int n=v.size();
    int x;
    cout << "enter x : ";
    cin >> x;
    int noOfPair=0;
    int left_ptr=0;
    int right_ptr=n-1;
    while(left_ptr < right_ptr){
        if(v[left_ptr] + v[right_ptr]==x){
            noOfPair++;
            cout << v[left_ptr] << "," << v[right_ptr] << endl;
            left_ptr++;
            right_ptr--;
        }
        if(v[left_ptr] + v[right_ptr] < x){
            left_ptr++;
        }
        if(v[left_ptr] + v[right_ptr] > x){
            right_ptr--;
        }
    }
    
    cout << "Total number of unique pair is : " <<  noOfPair;
    return 0;
}
// normal question