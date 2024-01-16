#include <iostream>
#define ARRAY_SIZE 10
using namespace std;

int main()
{
    int A[ARRAY_SIZE] = {1, 5, 10, 15, 20, 25, 30, 40, 45};
    int n, i, j;
    cout << "Please enter a number: ";
    cin >> n;
    if (n >= A[ARRAY_SIZE - 2])
    {
        n = A[ARRAY_SIZE - 1];
    }
    else if (n <= A[0])
    {
        for (i = 1; i < ARRAY_SIZE; i++)
        {
            A[i + 1] = A[i];
        }
        A[0] = n;
    }
    else if (n < A[ARRAY_SIZE - 2] && n > A[0])
    {
        for (i = 1; i < ARRAY_SIZE - 1; i++)
        {
            if (A[i] <= n && A[i + 1] >= n)
            {
                for (j = i + 1; j < ARRAY_SIZE - 1; j++)
                {
                    A[j + 2] = A[j + 1];
                    A[j] = n;
                }
                break;
            }
        }
    }
    for (j = 0; j < ARRAY_SIZE; j++) {
        cout << A[j] << " ";
    }
}