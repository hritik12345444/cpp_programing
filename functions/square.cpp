// write a function to print squares of the firsst 5 natural numbers.
#include<iostream>
using namespace std;


int main(){
    for(int i=1; i<=5; i++){
        int square(int n);  // using prototype
        int res=square(i);
        cout << "square of " << i << " is " << res << endl;
    }
 return 0;
}

int square(int n){
    return n*n;
}
