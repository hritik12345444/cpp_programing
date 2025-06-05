#include<iostream>
using namespace std;

class scooty{  // parent class 
public:
    int topSpeed;
    int mileage;
};

class bike : public scooty{  // child classs inhearit krr rha hai scooty ka 
public:
    int gears;
};

int main(){
    bike b1;
    b1.gears=3;
    b1.mileage=50;
    b1.topSpeed=200;
    cout << b1.topSpeed << endl;
    
    return 0;
}