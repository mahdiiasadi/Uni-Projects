#include <iostream>

using namespace std;

int main()
{
    int i, n, sum;
    cout << "Please enter your number: ";
    cin >> n;
    sum = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    cout << "sum of all the divisors is: " <<sum;
}