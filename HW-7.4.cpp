#include <iostream>

using namespace std;

int main() {
    int m, n, gcd;
    cout << "Please enter two integer numbers: ";
    cin >> m >> n;
    if (m % n == 0) {
            gcd = n;
        }
    else {
        while (m % n != 0)
        {
            n = m % n;
        }
        gcd = n;
    }
    cout << "gcd is: "<< gcd;
}