#include <iostream>
using namespace std;

int main() {
    long long number;
    cout << "Enter an integer: ";
    cin >> number;

    if (!cin) {
        cout << "Invalid input." << endl;
        return 1;
    }

    long long original = number;
    long long reversed = 0;
    long long temp = number;

    if (temp < 0) {
        cout << "Negative numbers are not considered palindromes." << endl;
        return 0;
    }

    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }

    if (reversed == original) {
        cout << original << " is a palindrome number." << endl;
    } else {
        cout << original << " is not a palindrome number." << endl;
    }

    return 0;
}
