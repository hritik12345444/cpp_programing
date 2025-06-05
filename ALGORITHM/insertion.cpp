// insnertion sort
#include<iostream>
#include<vector>
using namespace std;
void insertionsort(vector<int> &v){
    int n=v.size();
    for(int i=1; i<n; i++){
        int curr_ele=v[i];
        int j=i-1;
        while(v[j]>curr_ele and j>=0){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=curr_ele;
    }
    return;
}

int main(){
    int n;
    cout << "enter n";
    cin >> n;
    vector<int> v(n);
    cout << "enter elements \n";
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    insertionsort(v);
    for(int i=0; i<n; i++){
        cout << v[i]<< " ";
    }

    return 0;
}