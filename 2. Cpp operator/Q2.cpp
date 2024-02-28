//Write a program to take the values of two variables a and b from the keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a < 50 && a < b) {
        cout << "Both conditions are true.";
    } else {
        cout << "Both conditions are not true.";
    }
    return 0;
}