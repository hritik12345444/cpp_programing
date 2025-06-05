#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> l1={1,2,3,4,5};
    auto itr= l1.begin();  // itr points to the first element after reverseing the list
    cout << *itr << endl;

    auto itr2= l1.rend();  // iterator for the position after the last element in reverse iteration
    // cout << *itr2 << endl;

    // move the itr pointer to next 2 step
    advance(itr,2); // now itr is pointing to 3 in list 
    cout << *itr << endl; 

    // print in reverse order 
    auto ritr= l1.rbegin();  // now ritr is pointing to last element in list
    for(ritr ; ritr!= l1.rend(); ritr++){
        cout << *ritr << " ";
    }cout << endl;

    return 0;
}