// coutn sort in vector

#include<iostream>
#include<vector>
using namespace std;
void countsort(vector<int> &v){
    int n=v.size();
    int m_ele=v[0];
    // finding maximum element

    for(int i=0; i<n; i++){
        m_ele=max(m_ele,v[i]);
    } 

    // create a frequency array
    vector<int> freq(m_ele+1,0);
    for(int i=0; i<n; i++){
        freq[v[i]]++;
    }

    // updating the frequency array

    for(int i=1; i<m_ele+1; i++){
        freq[i]+=freq[i-1];
    } 

    // creating a result arrray

    vector<int> ans(n);
    for(int i=0; i<n; i++){
        ans[--freq[v[i]]]=v[i];
    }

    // copying ans array to the original array

    for(int i=0; i<n; i++){
        v[i]=ans[i];
    }
    return;
}
int main(){
    int n;
    cout << "enter size of array \n";
    cin >> n;

    cout << "enter elements of array \n";
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    countsort(v);
    cout << "The sorted array is below " << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i]<< " ";
    }
    return 0;
}