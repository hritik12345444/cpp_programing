// Radix sort 
#include<iostream>
#include<vector>
using namespace std;
void count(vector<int> &v, int pos){
    int n=v.size();
    // create a frequency array

    vector<int> freq(10,0);
    for(int i=0; i<n; i++){
        freq[(v[i]/pos)%10]++;
    }
    // calculate cumulative frequency array

    for(int i=1; i<10; i++){
        freq[i]+=freq[i-1];
    }

    vector<int> ans(n);
    // yeha last element se start krna hai warna nhi desired output aayega
    
    for(int i=n-1; i>=0; i--){
        ans[--freq[(v[i]/pos)%10]]=v[i];
    }
    for(int i=0; i<n; i++){
        v[i]=ans[i];
    }
}
void radixSort(vector<int> &v){
    int n =v.size();
    int max_ele=v[0];
    for(int i=0; i<n; i++){
        max_ele=max(max_ele,v[i]);
    }

    for(int pos=1; max_ele/pos>0; pos*=10){
        count(v,pos);
    }
}
int main(){
    cout << "enter n : " ;
    int n;
    cin >>n;
    cout << "enter elements of array \n";
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    radixSort(v);
    for(int i=0; i<n; i++){
        cout << v[i]<< " ";
    }
    return 0;
}