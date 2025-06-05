// sum of the following seriese
// s=1-2+3-4.....n;
#include<iostream>
using namespace std;
int main(){
    int n,osum=0,esum=0,res=0;
    cout << "enter a numberr ";
    cin >> n;
    for(int i=1; i<=n; i++){
        if(i%2==0){
            esum+=i;
        }
        else {
            osum+=i;
        }
    }
    res=osum-esum;
    cout << "resul is " << res;
    return 0;
}