// deleting 
#include<iostream>
#include<list>
using namespace std;
int main(){

    list<int> l1= {1,2,3,4,5};
    for(auto num : l1){
        cout << num << " ";
    }cout << endl;
    
    auto itr1= l1.begin(); // itr1 is pointing to 1

// move itr1 to next 3 times
    advance(itr1,3); // now itr1 is pointing to 4

// 1.  delete the element at the itr1
    // l1.erase(itr1);

// print the list
    // for(auto num : l1){
    //     cout << num << " ";
    // }cout << endl;

// 2. deelte from start point to end point
    
    auto e_itr= l1.begin();  // e_itr is pointing to 1
    advance(e_itr,2);   // now this itr is pointing to 3
    auto s_itr= l1.begin(); // pointing to 1

// delet from s_itr to e_itr
    l1.erase(s_itr,e_itr);

// printing
    for(auto nums : l1){
        cout << nums  << " ";
    }cout << endl;
    return 0;
}