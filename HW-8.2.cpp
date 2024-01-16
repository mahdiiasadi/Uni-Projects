#include <iostream>
#define ARRAY_SIZE 5
using namespace std;

int main () {
    int A[ARRAY_SIZE];
    int B[ARRAY_SIZE];
    int i, j, temp;
    cout << "Please enter " << ARRAY_SIZE << " elements for array A:\n";
    for (i = 0; i < (ARRAY_SIZE); i++)
    {
        cin >> j;
        A[i] = j;
    }
    cout << "Please enter " << ARRAY_SIZE << " elements for array B:\n";
    for (i = 0; i < (ARRAY_SIZE); i++)
    {
        cin >> j;
        B[i] = j;
    }
    for (i = 0; i < (ARRAY_SIZE); i++) {
        temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }
}