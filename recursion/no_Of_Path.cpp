//   |__|__|__|
//   |__|__|__|
// Find the number of path to reach starting to last_box 
#include<iostream>
using namespace std;
int no_Of_Path(int i, int j, int m, int n){
    // base case
    if(j>n-1 || i>m-1) return 0;
    if(j==n-1 and i==m-1 ) return 1; 
    int res= no_Of_Path(i,j+1,m,n) + no_Of_Path(i+1,j,m,n);
    return res;
}
int main(){
    int m,n;
    cout << "enter  m & n";
    cin  >> m >> n;
    int res=no_Of_Path(0,0,m,n);
    cout << res << " way to reach the lst_box" << endl;
    return 0;
}
// very very inportant 