#include<iostream>
using namespace std;

class student{
public:
    int rno;
    string name;
    
    student(){  // default constructor

    }

    student(int rno, int marks, string name){ // parameterised constructure
        this->marks=marks;
        this->name=name;
        this->rno=rno;
    }

    void print(){
        cout << name << " " << rno << " " << marks << endl; 
    }

    void setmarks(int marks){  // setter
        this-> marks= marks;
    }

    int getmarks(){  // getter
        return marks;
    }
private:
    int marks;
    
};

int main(){
    student s1(1,50,"hritik");
    s1.setmarks(55);
    student s2;
    s2.setmarks(77);
    cout << s1.getmarks()<< endl;
    return 0;
}