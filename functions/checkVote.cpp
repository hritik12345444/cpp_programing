// Given the age of a person, write a funtion to check if the person is eligible to vote or not
#include<iostream>
using namespace std;
void check(int n){
    if(n>=18){
        cout << "eligible to vote";
    }
    else cout << "not eligible to vote";
    return ;
}
int main(){
    int age;
    cout << "enter age ";
    cin >> age;
    check(age);
    return 0;
}