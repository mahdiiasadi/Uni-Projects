#include <iostream>

using namespace std;

int main()
{
    float s, r;
    cout << "Please enter your salary in million: ";
    cin >> s;

    if (s < 6) {
        r = s;
    }
    else if (s >= 6 && s < 8) {
        r = s * 95 / 100;
    }
    else if (s >= 8 && s < 10) {
        r = s * 90 / 100;
    }
    else if (s >= 10 && s < 14) {
        r = s * 85 / 100;
    }
    else if (s >= 14 && s < 18) {
        r = s * 80 / 100;
    }
    else if (s >= 18 && s < 25) {
        r = s * 75 / 100;
    }
    else if (s >= 25) {
        r = s * 65 / 100;
    }

    cout << "Your salary after tax reduction is: " << r << " million";
}
