// Find the total number of pairs in the Array whose sum is equal to the given value x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x,pair=0;
    cout << "enter x ";
    cin >> x;
    // vector declearation 
    vector<int> v;
    // taking value of vactor by user
    for(int i=0; i<5; i++){
        int element;
        cout << "enter elements ";
        cin >> element;
        v.push_back(element);
    }
    // code for result
    for(int i=0; i<v.size()-1; i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i]+v[j]==x){
                pair++;
                // print the pair that make the sum is equal to x.
                cout << "(" <<  v[i] << ","<< v[j] << ")"<< endl;
            }
        }
    }
    // print the result
    cout << "pair is " << pair;
    return 0;
}