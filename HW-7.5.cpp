#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i, j, n, sum, flag;
    cout << "Please enter your number: ";
    cin >> n;
    sum = 0;
    for (i = 2; i < n; i++)
    {
        flag = 0;
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            sum += i;
            cout << i << "\t";
        }
    }
    cout << "\nsum is: "
         << " " << sum;
}