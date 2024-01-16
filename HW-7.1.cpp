#include <iostream>

using namespace std;

int main() {
    int n, m, p, i;
    p = 1;
    cout << "PLease enter your number: ";
    cin >> m;
    cout << "PLease enter the power: ";
    cin >> n;
    if (n == 0) {
        p = 1;
    }
    else if (n == 1) {
        p = m;
    }
    else if (n >=2) {
        for (i = 1; i <= n; i++) {
        p *= m;
    }
    }
    cout << m << " to the power of " << n << " is: " << p;
}