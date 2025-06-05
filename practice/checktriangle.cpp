#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter sides : ";
    cin >> a >> b >> c;
    bool flag=false;
    while((a+b)>c && (a+c)>b && (b+c)>a){
        cout << "Yes, triangle is possible ";
        flag=true;
        break;
    }
    if(flag==false){
        cout << "Not possible";
    }

    return 0;
}