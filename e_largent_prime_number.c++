#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); ++i)
        if (num % i == 0) return false;
    return true;
}

int main() {
    string piDigits;
    cout << "Enter the first 100 digits of Pi (exclude the '3.'): ";
    cin >> piDigits;

    if (piDigits.length() < 5) {
        cout << "Need at least 5 digits to find a 5-digit number!" << endl;
        return 0;
    }

    int maxPrime = 0;

    for (int i = 0; i <= piDigits.length() - 5; ++i) {
        string sub = piDigits.substr(i, 5);
        int number = stoi(sub);
        if (isPrime(number) && number > maxPrime) {
            maxPrime = number;
        }
    }

    if (maxPrime > 0)
        cout << "Largest 5-digit prime in the input: " << maxPrime << endl;
    else
        cout << "No 5-digit prime found in the given digits!" << endl;

    return 0;
}
