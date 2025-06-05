// Write a program to copy the contents of one array into another in the reverse order.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "enter size of vector ";
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int ele;
        cout << "enter elements : ";
        cin >> ele;
        v.push_back(ele);
    }
    // print the original array 
     for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << "\n" << endl;         // \n -> next line & endl -> bhi next line 
    vector <int> v2(n);
    // code of reverse and insert in v2 vector 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+j==n-1){
                v2[j]=v[i];
            }
        }
    }
    // print v2 vector after reverse
    for(int i=0; i<n; i++){
        cout << v2[i] << " ";
    }
    return 0;
}