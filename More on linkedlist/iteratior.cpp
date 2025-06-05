// iterator
#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> v= {1,3,4,5};

    // method:-1 for defining the iterator for the given vector
    vector<int> ::iterator itr;
    itr= v.begin();

    // method:-2 for defining the iteratior and also initialise it by first element of vector
    auto itr2= v.begin();

    // method:- 1 for printing
    for(itr2; itr2!=v.end(); itr2++)
    {
        cout << *itr2 << " ";  // we can access the value through * operator
    }cout << endl;


    // method:-2 for printing the vector
    for(auto num: v)  // here we access the element through num print every element till the vector is empty
    {
        cout << num << " ";
    }cout << endl;
    return 0;

}