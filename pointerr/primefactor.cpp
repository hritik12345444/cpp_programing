// // prime factor 

#include <iostream>
using namespace std;

void primeFactors(int n) {
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        cout << 2 << " ";
        n = n / 2;
    }

    // n must be odd at this point, so we can skip one element (i) in the loop
    for (int i = 3; i * i <= n; i = i + 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }

    // This condition is to handle the case when n is a prime number greater than 2
    if (n > 2) {
        cout << n << " ";
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Prime factors of " << num << " are: ";
    primeFactors(num);

    return 0;
}
// check video on youtube for easy solution 