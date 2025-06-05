// Given an array of inteers 'a', move all the even integers at the beginnign of the array followed by all the odd 
//integers. The relative order of odd or even integers does not matter. Return any array that satisfies the condition.
#include<iostream>
#include<vector>
using namespace std;
void moveevenodd(vector <int> &v){
    int first_idx=0;
    int last_idx=v.size()-1;
    while(first_idx < last_idx){
        if(v[first_idx]%2!=0 && v[last_idx]%2==0){
            int temp=v[first_idx];
            v[first_idx]=v[last_idx];
            v[last_idx]=temp;
            first_idx++;
            last_idx--;
        }
        if (v[first_idx]%2==0){
            first_idx++;
        }
        if(v[last_idx]%2!=0){
            last_idx--;
        }

    }
    return;
}
int main(){
    int n;
    cout << "enter size of vector : ";
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++){
        int ele;
        cout << "enter elements ";
        cin >> ele;
        v.push_back(ele);
    }
    moveevenodd(v);
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    return 0;
}
// not hard but focus on it 