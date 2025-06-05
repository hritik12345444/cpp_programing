// find the square root of the given non negative value x. Round it off to the nearest 
//floor integer value.
#include<iostream>
#include<vector>
using namespace std;
int square(int x){
    int si=1, ei=x;
    int ans=-1;
    while(si<=ei){
        int mid=si+(ei-si)/2;
        if(mid*mid <=x){
            ans =mid;
            si=mid+1;
        }
        else if(mid*mid > x){
            ei=mid-1;
        }
       
    }
    return ans;
}
int main(){
    int n;
    cout << "enter n ";
    cin >>n; 
    cout << square(n);
    return 0;
}