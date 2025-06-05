// Create a program that demonstrates the use of pointer arithmetic by increamenting and decrementing a pointer to an array of integers.

#include<iostream>
using namespace std;

int main(){
    int arr[3]={1,2,3};
    cout << arr << " " << *arr << " " << 1+arr << " " << *(1+arr)<< " " << 1+(*(1+arr)) << endl;
    // arr -> Address of  0th index
    // *arr -> value of 0th index element 
    // 1+arr -> Address of 1st index
    // *(1+arr) -> value of 1st index element 
    // 1a+(*(1+arr)) -> value of 2nd index element  



    // outputs
    // 0th element address
    // 1
    // 1st element address
    // 2
    // 3
    return 0;
}
