// first n factorial seriese
#include<iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    cout << "enter number ";
    cin >> n;
    for(int i=1; i<=n; i++){
        fact=fact*i;
        cout << "factorial of " << i << " is : " << fact << "\n";
    }
    return 0;
}