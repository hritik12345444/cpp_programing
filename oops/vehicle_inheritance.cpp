#include<iostream>
using namespace std;

class vehicle{
public:
    int topspeed;
    int gear;
};

class bike : public vehicle{
public:
    int mileage;
};

class scooty : public bike{
public:
    int abc;
};

int main(){
    scooty s1;
    s1.topspeed=22;
    cout << s1.topspeed<< endl;
    return 0;
}