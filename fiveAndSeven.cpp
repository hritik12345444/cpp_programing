// first multiple of 5 which is also a multiple of 7
#include<iostream>
using namespace std;
int main(){
    int i=5;
    while(true){
        if(i%5==0 && i%7==0){
            cout << i<< endl;
            break;
        }
        i+=5;
    }
    return 0;
}
// take focus on this code