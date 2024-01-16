#include <iostream>
#define ARRAY_SIZE 10
using namespace std;

int main()
{
    int A[ARRAY_SIZE];
    int i, j, x, temp, avg;
    cout << "Please enter " << ARRAY_SIZE << " elements:\n";
    for (i = 0; i < (ARRAY_SIZE); i++)
    {
        cin >> x;
        A[i] = x;
    }
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        for (j = 0; j < (ARRAY_SIZE - i); j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    avg = (float) (A[0] + A[ARRAY_SIZE - 1]) / 2;
    cout << "Average: " << avg;
}