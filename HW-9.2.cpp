#include <iostream>
using namespace std;
#define ARRAY_SIZE 10

int main()
{
    int i, j, temp;
    int a[ARRAY_SIZE];
    cout << "Please enter: " << ARRAY_SIZE << " elements: ";
    for (i = 0; i < ARRAY_SIZE; i++) {
        cin >> a[i];
    }
    for (i=0; i < ARRAY_SIZE; i++) {
        for (j = 0; j < (ARRAY_SIZE-i); j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
    }
    }
    cout << "second minimum value is: " << a[1];
}