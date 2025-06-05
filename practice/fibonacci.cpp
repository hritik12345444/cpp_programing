// print nth fibonaci number       1 1 2 3 5 8 13 21    n=6= 8
#include<iostream> 
using namespace std;
int main(){
    int n;
    cout << "enter n ";
    cin >> n;
    int a=0;
    int b=1;
    int c=0;
    for(int i=1; i<n; i++){ // less than n because one element also here befor loop when loop is stat than in 2nd intation element is going on 3 position
        c=a+b;
        a=b;
        b=c;
    }
    cout << c;
    return 0;
}
