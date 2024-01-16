#include <iostream>

using namespace std;

int main()
{
    int m, n, i;
    cout << " Please enter the dividend number:\t";
    cin >> m;
    cout << " Please enter the divisor number:\t";
    cin >> n;
    for (i = 0; n <= m; i++)
    {
        m = m - n;
    }
    cout << "Remainder is: " << m << "\n";
    cout << "Quotient is: " << i;
}