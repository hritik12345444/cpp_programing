#include<iostream>
using namespace std;

class student{
public:
    string name;
    int rno;
    char grade;

    student(string name, int rno, char grade){
        this->name = name;
        this->rno= rno;
        this->grade=grade;
    }
};


int main(){
    student s1("Hritik",37, 'A');
    student s2("suman",38, 'B');
    student* c2=new student("hritik", 77, 'v');  // run time memory allocation hua ye dynamic memory allocation hai
    cout << c2->name << endl;
    return 0;
}