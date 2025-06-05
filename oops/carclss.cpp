#include<iostream>
using namespace std;
class car{
public:
    string name;
    int price;
    int seats;
};
void print(car c){
    cout << c.name << " " << c.price << " " << c.seats<< endl;
}

void change(car* c){
    (*c).name="Mahendra";
    c->price=0;
    c->seats=33;
}

int main(){
    car c1;
    car c2;
    car c3;
    c1.name="Hondai";
    c1.price=140000;
    c1.seats=4;


    c2.name="Verna";
    c2.price=150000;
    c2.seats=4;

    c3.name="squada";
    c3.price=25000;
    c3.seats=75;

    change(&c1);
    print(c1);
    print(c2);
    print(c3);

    return 0;
}