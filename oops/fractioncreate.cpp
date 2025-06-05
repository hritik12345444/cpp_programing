#include<iostream>
using namespace std;

class fraction{
public:
    int num;
    int den;

    fraction(){ //default constuctor 

    }
    fraction(int num, int den){// parameterised constructor
        this->num=num;
        this->den=den;
    }

    fraction add(fraction f){
        int newnum= this->num*f.den + f.num*this->den;
        int newden= this->den*f.den;
        fraction ans(newnum,newden);
        return ans;

    }

    fraction operator-(fraction f){ // we can use - as a function name but we have to add a operator word than we can use - as a function name 
        int newnum= this->num*f.den - f.num*this->den;
        int newden= this->den*f.den;
        fraction ans(newnum,newden);
        return ans;
    }

    void print(){
        cout << num << " / " << den << endl;
    }
};

int main(){
    fraction f4;
    f4.num=3;
    f4.den=5;
    fraction f1(1,3);
    f1.print();
    fraction f2(2,3);
    f2.print();
    fraction f3= f1.add(f2);
    f3.print();

    fraction f5=f1-f2;   // - operator work as a function name
    f5.print();
    return 0;
}