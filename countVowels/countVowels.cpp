#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Function to count vowels in a string
int countVowels(const string& str) {
    int count = 0;
    for (char ch : str) {
        char c = tolower(ch);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Number of vowels = " << countVowels(str) << endl;

    return 0;
}