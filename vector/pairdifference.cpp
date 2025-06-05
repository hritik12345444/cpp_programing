//Given a vector arr[] sorted in increasing order of n size and an ineger x, find if there exissts a pair in the array whose absolute difference is exactly x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{9,23,45,69,78};
    int n=v.size();
    int x;
    cout<<"enter x : ";
    cin >> x;
    bool flag=false;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(abs(v[i]-v[j])==x){
                flag=true;
                break;
            }
        }
    }
    if(flag==true){
        cout << "Yes it is present ";
    }
    else {
        cout << "no it is not present ";
    }
    return 0;
}