#include<iostream>
#include<list>
using namespace std;

int main(){

    
    list<int> l1={1,2,3,4,5};

    // range based 
    // printing
    for(auto num: l1){
        cout << num <<  " ";
    }cout << endl;


    // using iterator
    list<int> ::iterator itr;
    itr= l1.begin();
    for(itr; itr!= l1.end(); itr++){
        cout << *itr << " ";
    }cout << endl;

    return 0;
}