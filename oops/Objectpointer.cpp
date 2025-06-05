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

void change(student* s){
    s->name="Suman";
    s->rno=38;
}
int main(){
    student s1("Hritik",37, 'A');
    cout << s1.name << " " << s1.rno << " " << s1.grade << endl;
    student* s=&s1;
    change(s);
    cout << s1.name << " " << s1.rno << " " << s1.grade << endl;

    // (*s).name="Suman"; // same as s->
    // s->rno=38; // same as (*s).
    // (*s).grade='B'; 
    // cout << s->name << " " << s->rno << " " << s->grade << endl;
    return 0;
}