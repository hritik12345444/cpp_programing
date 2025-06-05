// Check if we can partition the array into two subarrays with equal sum. More formally, check that the prefix sum of a part of th array is equal to the 
//suffix sum of rest of th array
#include<iostream>
#include<vector>
using namespace std;
bool checkpartition(vector<int>&v){
    int prefix_sum=0;
    int sufix_sum=0;
    int n=v.size();
    int total_sum=0;
    for(int i=0; i<n; i++){
        total_sum+=v[i];
    }
    // total array ka sum me se prefix sum ko minus krr denge to sufix sum nikal jayega
    for(int i=0; i<n; i++){
        prefix_sum+=v[i];
        sufix_sum=total_sum-prefix_sum;
        if(prefix_sum==sufix_sum) return true;   
    }
    
    return false;
}
int main(){
    int n;
    cout << "enter n ";
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++){
        int ele;
        cout << "enter elements of vector : ";
        cin >> ele;
        v.push_back(ele);
    }
    // bool detatype use for check true or false
    bool flag=checkpartition(v);
    cout << flag;
    return 0;
}

// good question practice it again 