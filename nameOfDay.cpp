// name of day print 
#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "enter no of day(0-7) ";
    cin >> n;
    if(n==1){
        cout << "monday";
    }
    else if (n==2) cout << "tuesday";
    else if (n==3) cout << "wednesday";
    else if (n==4) cout << "thursday";
    else if (n==5) cout << "friday";
    else if (n==6) cout << "saturday";
    else if (n==7) cout << "sunday";
    else cout << "invalid day number ";
    return 0;
}