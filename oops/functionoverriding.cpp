#include<iostream>
using namespace std;

class scooty{
public:
    int topspeed;
    int mileage;
    virtual void sound(){   // virtual use for exact not wrong agar virtual nhi lgayenge to scoty ka sound print hojayea
        cout << "vroom vroom" << endl;
    }
};

class bike : public scooty{
public:
    int gear;
    void sound(){
        cout << "Dhroom Dhroom" << endl;
    }
};

class superbike : public bike{
public:
    void sound(){
        cout << "zroom zroom" << endl;
    }
};

int main(){
    scooty* b= new bike();
    b->sound();
    bike* s = new superbike();
    s->sound();
  
    return 0;
}
/*Virtual word ka use krne se jo bhi jis class ka object bnate hai uss class ka property ko use krr skte hai */