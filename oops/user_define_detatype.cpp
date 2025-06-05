#include<iostream>
using namespace std;

class student{
public:
    string name;
    int rno;
    float cgp;
    int marks;
};

class car{
public:
    int speed;
    string name;
    float average;
};


int main(){
    student s1;
    car c1;
    c1.average= 2.5;
    s1.marks=44;
    cout << c1.average << " " << s1.marks << endl;
    return 0;
}
