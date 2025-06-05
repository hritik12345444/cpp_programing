// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int even=0;
    int odd=0;
    vector <int> v;
    // taking input 
    for(int i=0; i<5; i++){
        int element;
        cout << "enter elements ";
        cin >> element;
        v.push_back(element);       
    }
    // process on even element and odd element 
    for(int i=0; i<v.size(); i++){
        if(i%2==0){
            even+=v[i];
        }
        else odd+=v[i];
    }
    // print difference b/w even & odd
    cout << even-odd;
    return 0;
}