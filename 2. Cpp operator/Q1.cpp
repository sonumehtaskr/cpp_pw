//Write a program to check whether two numbers (entered by user) are equal or not.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a == b) {
        cout << "Both numbers are equal.";
    } else {
        cout << "Both numbers are not equal.";
    }
    return 0;
}