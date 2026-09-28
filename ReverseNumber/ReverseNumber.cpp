#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;

    cout << "Enter a number: ";
    cin >> n;

    int temp = n;
    if (temp < 0) temp = -temp;   // handle negative numbers

    while (temp > 0) {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if (n < 0) rev = -rev;

    cout << "Reversed number = " << rev << endl;
    return 0;
}