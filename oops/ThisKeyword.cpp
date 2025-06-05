#include<iostream>
using namespace std;
class student{
public:
    int rno;
    string name;
    float ave;

    student(){

    }

    student(string name, int rno, float ave){
        this->rno=rno;
        this->name=name;
        this->ave=ave;
    }
    void print(int rno){ // parameter me pass krr bhi skte hai aur nahi bhi
        cout << this->name << " " << this->rno << " " << this->ave << endl;
        cout << rno << endl; // this ka use nahi krte hai to phle parameter ko dekhega aur hoga to print krega nhi to class wala lo dekhaga
    }

    int matches(){
        return rno/ave;
    }
};

int main(){
    student s1("Hritik",100,33.0);
    student s2("Shatrudhan",200,55.0);
    s1.print(3);
    s2.print(2);
    cout <<  s1.matches() << endl;
return 0;
}