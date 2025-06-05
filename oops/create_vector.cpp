#include<iostream>
using namespace std;

class Vector{
public:
    int size;
    int capacity;
    int* arr;   

    Vector(){  // default constructor
        size=0;
        capacity=1;
        arr= new int[1];
    }

    void add(int value){  // This function works like push_back() function in vector
        if(size == capacity){
            capacity*=2;
            int* arr2= new int[capacity];  // run time memory allocation
            for(int i=0; i<size; i++){
                arr2[i]=arr[i];
            }
            arr=arr2;
        }
        arr[size++]=value;
    }

    void delet(){  // This function work like pop_back() function function in vector
        if(size==0){
            cout << "Array is Empty"<< endl;
        }
        size--;
    }

    void print(){
        for(int i=0; i<size; i++){
            cout << arr[i] << " " ;
        }
        cout << endl;
    }
    
    int get(int idx){       // return the value of arr[idx]
        if(idx >= size || idx < 0){
            cout << "Invalid index" << "-> ";
            return -1;
        }
        return arr[idx];
    }
}; 


int main(){
    Vector v;
    v.add(7);   // Here we add push_back() in v;
    v.print();
    v.add(3);
    v.print();
    v.add(6);
    v.print();
    v.add(0);
    v.print();
    v.delet();  // Here we pop_back() in v;
    v.print();
    int res= v.get(2);
    cout << res << endl; // value of  arr[2] 
    return 0;
}