#include<iostream>
using namespace std;
class loading{
public:
    void sum(int a , int b){
        cout << a+b << endl;
    }
    void sum(int a, int b, int c){
        cout << a+b+c << endl;
    }
    void sum(string a, string b){
        cout << a+b << endl;
    }

};

// This is function overloading because there are many function with same name

int main(){
    loading a;
    a.sum(2,3,3);
    a.sum(22,2);
    a.sum("Hritik","singh");
    return 0;
}