//Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    bool found = false;

    // Find pairs of prime numbers that sum up to num
    for (int i = 2; i <= num / 2; ++i) {
        if (isPrime(i) && isPrime(num - i)) {
            cout << num << " = " << i << " + " << num - i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << num << " cannot be expressed as the sum of two prime numbers." << endl;
    }

    return 0;
}
