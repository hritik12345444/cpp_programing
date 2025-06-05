#include<iostream>
using namespace std;
class vehicle{
public:  
    int topspeed;
    int milag;
};

class suzuki{
public:
    int abc;

};

class bike : public vehicle, suzuki{   // multiple inheritance
public:
    int xyx;
};
int main(){
   bike b1;
   b1.topspeed=33;
    return 0;
}