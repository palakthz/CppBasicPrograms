#include <iostream>
using namespace std;

// Function to find factorial
unsigned long long factorial(int n) {
    unsigned long long f = 1;
    for (int i = 2; i <= n; i++)
        f *= i;
    return f;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0)
        cout << "Factorial is not defined for negative numbers." << endl;
    else
        cout << "Factorial of " << n << " = " << factorial(n) << endl;

    return 0;
}