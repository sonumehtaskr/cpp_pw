//Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a 5 digit number: ";
    cin >> n;
    int first = n / 10000;
    int last = n % 10;
    cout << "Sum of first and second last digit: " << first + last;
    return 0;
}