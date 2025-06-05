// Given radius of a circle. Write a function to print the area and circumference of the circle.
#include<iostream>
using namespace std;


float area(int r){
    float res=(22*r*r)/7;
    return res;
}


float circumference(int r){
    float res = (2*22*r)/7;
    return res;
}


int main(){
    float r;
    cout << "enter radius of circle ";
    cin >> r;
    float x=area(r);      // calling function area
    float y=circumference(r);   // calling function circumference 
    cout << "area is " << x << endl;
    cout << "circumference is " << y << endl;
    return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int r;
//     cout << "enter n ";
//     cin >> r;
//     int area=(22*r*r)/7;
//     cout << area;
//     return 0;
// }