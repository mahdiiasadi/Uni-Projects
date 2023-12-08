#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    cout << "Please enter three numbers:\n";
    cin >> x >> y >>z;
    int numerator = (x - y) * (x + z);
    int denominator = (x + y + z)*(x + y +z) + 1;
    float result = (float) numerator / denominator;
    cout << result;
}
