// find the power 
#include<iostream>
using namespace std;
int pow(int a , int b){
    if(b==0) return 1;
    if(b%2==0){
        int res=pow(a,b/2) ;
        res=res*res;
        return res;
    }
    else{
        int res=pow(a,b/2);
        res=a*res*res;
        return res;
    }
}
int main(){
    int a,b;
    cout << "enter a & b : ";
    cin >> a >> b;
    int res=pow(a,b);
    cout << res << endl;
    return 0;
}
// perfectly done