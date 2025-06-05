// Defining the list

#include<iostream>
#include<list>    // must have to add this header file for list
using namespace std;


int main(){
    // defining the list
    list<int> r_no;

    // method:-1 for initialise a list with few numbers
    list<int> l1={1,3,4,5};

    // method:-2 initialise a list 
    list<int> l2{6,7,8,9};

    while(not l2.empty()){
        cout << l2.front() << " ";
        l2.pop_front();
    }
    cout << endl;
    // create a list  and write some operations
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3); // add at end
    li.push_front(55);// add at front
    li.push_front(66);
    // li.pop_back(); // remove from end
    // li.pop_front();// remove form front
    while(not li.empty()){   // print list
        cout << li.front() << " " ;
        li.pop_front();
    }
    return 0;
}