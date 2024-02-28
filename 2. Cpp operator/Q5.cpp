//Write a program to calculate the sum of digits of a 3 digit number.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a 3 digit number: ";
    cin >> n;
    int sum = 0;
    sum += n / 100;
    n %= 100;
    sum += n / 10;
    n %= 10;
    sum += n;
    cout << "Sum of digits: " << sum;
    return 0;
}