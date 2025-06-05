// Given an array of size n. AAnswer q queries where you need to print the sum of values in a given range of indices from l to r (both included).
#include<iostream>
#include<vector>
using namespace std;
// 2 3 4 5 6 

int main(){
    int n=5;
    vector<int> v(n+1,0);
    for(int i=1; i<=n; i++){
        //int ele;
        cout << "enter elements ";
       // cin >> ele;
       cin >> v[i];
       // v.push_back(ele);
    }
    cout << endl;
    int q;    
    cout << "enter queriese ";
    cin >> q;
    for(int i=1; i<=q; i++){  // q times loop chalega 
        cout << i << " time "<<endl;
        int l,r,ans=0; 
        cout << "enter l(starting position) & r(ending position) ";
        cin >> l >> r;            // l and r ka value input lega aur array me l se r tkk ka sum krna hai 
        int sum_r=0;
        int sum_l=0;
        for(int i=1; i<=n; i++){
            if(i<=r){
                sum_r+=v[i];
            }
            if(i<l){
                sum_l+=v[i];
            }
        }
        ans = sum_r - sum_l;
        cout << "sum from position l to r  " << endl <<  ans << endl;
        cout << "exit "<< endl;
    }
    cout << "you input array is " << endl; 
    return 0;
}