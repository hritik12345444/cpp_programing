// Count the number of elements strictly greater than value x.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x,count = 0;
    int n;
    cout << "enter size of vector ";
    cin >> n;
    cout << "enter x ";
    cin >> x;
    vector <int> v;
    for(int i=0; i<n; i++){
        int element;
        cout << "enter elements ";
        cin >> element;
        v.push_back(element);
    }
    // vactor ka size likhenge v.size na ki sizeof(v);                           NOTE
    for(int i=0; i<v.size(); i++){
        if(v[i]>x){
            count++;
        }
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << "\n";
    cout << count ;
    return 0;
}