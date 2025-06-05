// Search the 'target' value in a 2d  integer matrix of dimensions n*m and return 1 if found, els return 0. This matrix has the following properties;
/* 1. Integer in each row are sorted from left to right.
   2. The first integer of each row is greater than the last integer of the previous row.
   */
#include<iostream>
#include<vector>
using namespace std;
bool find_target(vector<vector<int>> &v, int target){
    int n=v.size(); // no. of row
    int m=v[0].size();// no. of column
    int si=0, ei=n*m - 1;
    while(si<=ei){
        int mid = si+(ei-si)/2;
        int x= mid / m; // if we have mid than we can find the i and j of matrix 
        // mid me number of columns se divive krenge to row numberr mill jayega
        // aur mid me number  of colums se modulus nikalenge to columns number milega
        int y= mid % m;// calculate  column number 
        if(v[x][y] == target){
            return true;
        }
        else if(v[x][y] > target){
            ei=mid-1;
        }else{
            si=mid+1;
        }
    }
    return false;
}
int main(){
    vector<vector<int> > v={{1,3,5,7}, {10,11,16,20}, {23,30,34,60}};
    int target=3;
    bool res= find_target(v,target);
    cout << res;
    
    return 0;

}
// code is write but focus of find ith and jth element using mid