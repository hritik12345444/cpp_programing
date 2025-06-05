#include<iostream>
using namespace std;

class student{
public:
    string name;
    int rno;
    float percentage;

    student(string n, int r, float p){  // This is parameterised constructor
        name= n;
        rno = r;
        percentage = p;
    }
    
    student(){ // default constructor

    }

};

void change(student* s){
    s->name="suman";
}

void print(student s){
    cout << s.name <<  " " << s.percentage << " " << s.rno << endl;
}

int main(){
    student s1("Hritik", 37 ,22.3 );
    student s2("Shatrudhan", 1, 33.3);
    student s3=s2;   // Here copy constructor used
    print(s1);
    print(s2);
    print(s3);
    change(&s3);
    print(s3);
    return 0;

}