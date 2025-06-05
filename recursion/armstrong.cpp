// wap to check the given number is armstrong number or not
#include<iostream>
using namespace std;
int pow(int a,int b){   // This function return's the a raised b i.e (a^b)
    // base case
    if(b==0) return 1;
    return pow(a,b-1) * a;
}
int armstrong(int n, int t_d){
    // base case
    if(n>=1 and n<=9){
        return pow(n,t_d) ;///res=pow(n,t_d); we can use both (here we use n because all the sinle digit number is also a armstrong number)
    }
    
    return  armstrong(n/10,t_d) + pow(n%10,t_d);
}
int t_n(int n){ // This function return's total number of digit 
    // base case
    if(n>=0 and n<=9) return 1;
    int res=t_n(n/10) + 1;
    return res;
}
int main(){
    int n;
    cout << "enter a number ";
    cin >> n;
    if(n==0) cout << "Yes, it is a armstrong number ";
    else {
    int total_num=t_n(n);
    int res=armstrong(n,total_num);
    // Here check the given number is armstrong number or not 
    if(res==n){
        cout <<  "Yes, it is a armstrong number ";
    }else {
        cout << "Not , a armstrong number ";
    }
    }
    return 0;
}