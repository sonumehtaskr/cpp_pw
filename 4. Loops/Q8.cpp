//Write a C++ program to print a triangle of prime numbers upto given number of lines of the triangle.

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
    int lines;
    cout << "Please enter the number of lines: ";
    cin >> lines;

    int number = 2;
    int spaces = lines - 1;

    // Printing the triangle of prime numbers
    for (int i = 1; i <= lines; i++) {
        // Print leading spaces
        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }
        
        // Print prime numbers for this line
        for (int j = 0; j < i; j++) {
            while (!isPrime(number)) {
                number++;
            }
            cout << number << " ";
            number++;
        }

        // Move to the next line
        cout << endl;
        spaces--;
    }

    return 0;
}
