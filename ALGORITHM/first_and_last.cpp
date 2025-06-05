// find first and last position of target element from the given array
#include<iostream>
#include<vector>
/* time=o(logn)
    space=o(1)
*/
using namespace std;
int first_position(vector<int> &v,int target){
    int si=0, ei=v.size()-1;
    int ans=-1;
    while(si<=ei){
        int mid=si+(ei-si)/2;
        if(v[mid]>=target){
            ei=mid-1;
            ans=mid;
        }
        else{
            si=mid+1;
        }
    }
    return ans;
}

int last_position(vector<int> &v,int target){
    int si=0, ei=v.size()-1;
    int ans=-1;
    while(si<=ei){
        int mid=si+(ei-si)/2;
        if(v[mid]<=target){
            ans=mid;
            si=mid+1;
        }
        else{
            ei=mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout << "enter n ";
    cin >> n;
    vector<int> v(n);
    cout << "enter element \n";
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int target;
    cout << "enter target ";
    cin >> target;
    int ub=first_position(v,target);
    int lb=last_position(v,target);
    if(v[ub]!=target){
        cout << "-1" << " " << "-1"<< endl;
    }
    else {
        cout << ub << " " << lb << endl;
    }
    return 0;
}
