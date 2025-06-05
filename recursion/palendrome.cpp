// Wap to check the given number is palendrome or not 
#include<iostream>
using namespace std;
int check(int n, int res){
    // base case
    if(n<=9 and n>=0) {
        return res=(res*10)+n;
    }
    int ld=n%10;
    res=(res*10)+ld;
    return check(n/10,res);
    //return res;
}
int main(){
    int n;
    cout << "enter a number ";
    cin  >> n;
    int res=check(n,0);
    if(res==n){
        cout<< "yes it is palendrome ";
    }
    else cout << "Not palendrome ";

    return 0;
}  