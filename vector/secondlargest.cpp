// Find the second largest elements in the given vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0; i<5; i++){
        int element;
        cout << "enter element ";
        cin >> element;
        v.push_back(element);
    }
    int size=v.size();                     // 2 5 3 4 6 7
    int max= INT32_MIN;
    int smax=INT32_MIN;

    for(int i=0; i<size; i++){
        if(max<v[i] ){
            max=v[i];
        }    
    }
    for(int i=0; i<size; i++){
        if(smax<v[i] && v[i]!=max){
            smax=v[i];
        }
    }
    cout <<" max " <<  max << " second max " << smax;
    return 0;
}