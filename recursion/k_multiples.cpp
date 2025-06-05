// Given a numberr num and a value k. Print k multiples off num.
#include<iostream>
using namespace std;
void multiples(int n,int id, int k){
    // base case
    if(id > k) return ;
    int res=n*id;
    cout << res << " ";
    multiples(n,id+1,k);
    return ;
}
int main(){
    int n,k;
    cout << "enter a  n & k";
    cin >> n >> k;
    multiples(n,1,k);
    return 0;
}