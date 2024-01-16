#include <iostream>
using namespace std;

int fib(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else if (x == 2)
    {
        return 1;
    }
    else if (x > 2)
    {
        return fib(x - 1) + fib(x - 2);
    }
}

int main()
{
    int A[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        A[i] = fib(i + 1);
    }
    for (i = 0; i < 10; i++) {
        cout << A[i] << " ";
    }
}