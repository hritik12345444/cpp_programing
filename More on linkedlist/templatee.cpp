/// template class
#include<iostream>
using namespace std;

template <typename T>
class node{
public:
    T value;
    node* next;

    node(T data){
        value= data;
        next= NULL;
    }

    void display(){
        cout << value << endl;
    }
};

int main(){

    node<int>* node1= new node<int> (3);  // dynamic memory allocation
    cout << node1->value << endl;

    node<int> node2(2);  // static memory allocation
    node2.display();

    node<char> * node3= new node<char> ('a'); // for char value
    cout << node3->value << endl;
    return 0;
}