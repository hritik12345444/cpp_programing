#include<iostream>
using namespace std;

class vehicle{
public:
    int topspeed;
};

class towwheelr : public vehicle{
public:
    int abc;
};

class threewheeler : public towwheelr{// multi-level inheritance
public:
    int xyx;
};

int main(){
    threewheeler th;
    th.topspeed=33;
    return 0;
}