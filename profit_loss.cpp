// profit and loss 
#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<< "enter cp and sp " << endl;
    cin >> cp >> sp;
    if(cp==sp) cout << "no profit & no loss ";
    if(cp<sp){
        cout << "profit" <<  cp-sp << endl;
    }
    else{
        cout << "loss "<< sp-cp << endl;
    }
    return 0;
}