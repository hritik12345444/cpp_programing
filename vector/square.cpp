// Given an integer array 'a' sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
#include<iostream>
#include<vector>
using namespace std;

// 1 2 3 4 5 
//n=5
// i=1
// 1

// sort the array which is reformed  
void checksort(vector <int> &v){
    int n=v.size();
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]>v[j]){
                int temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
    return;
}

// array created of square elements

void sortsquarenon_decreasing(vector<int>&v){
    int n=v.size();
    for(int i=0; i<n; i++){
        if(v[i]<0){
            v[i]=v[i]*(-1);
        }
        v[i]=v[i]*v[i];
    }
    checksort(v);
    return;
}

int main(){
    int n;
    cout << "enter n ";
    cin >> n;
    vector <int> v;
    // input elements of vector by user 
    for(int i=0; i<n; i++){
        int ele;
        cout << "enter element  " ;
        cin >> ele;
        v.push_back(ele);
    }
    // call a function for reformed a array which is square of own elements
    sortsquarenon_decreasing(v);
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}

// not hard but focused on it