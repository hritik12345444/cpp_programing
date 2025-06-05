// inserting element in list
#include<iostream>
#include<list>
using namespace std;
int main(){

    list<int> l1= {1,2,3,4,5};  // create a list
    
    // printing the original list 
    for(auto nums : l1){
        cout << nums << " ";
    }cout << endl;

    list<int> ::iterator itr1;  // create a iterator 
    itr1= l1.begin();   // initialise the iterator at 1

    advance(itr1,2);  // move the iterator by 2 steps 
    // now itr is pointing to 3


// 1.     insert before the itr
    // l1.insert(itr1,5);  // insert 5 before 3

    // // print the lists after inserting the element
    // for(auto num : l1){ 
    //     cout << num << " ";
    // }cout << endl;


// 2.  insert count times before the itr
    // auto itr2= l1.begin();
    // advance(itr2,3);
    // l1.insert(itr2,2,9);
    // for(auto num : l1){
    //     cout << num << " ";
    // }cout << endl;


// crete a new iterator 
    auto itr= l1.begin();  // new iterator 

    advance(itr,3);  // move itr to 3 step forward

    // crete a end pointe 
    auto e_itr= l1.begin();
    // move the end pointer to next 2 step
    advance(e_itr,2);

    // crete a starting pointer
    auto s_itr= l1.begin();

// 3. insert element from starting pointer to ending pointer before itr 
    l1.insert(itr,s_itr,e_itr);

    // printing
    for(auto num : l1){
        cout << num << " ";
    }cout << endl;

    return 0;
}