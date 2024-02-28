// Write a C++ program to swap two numbers with the help of a third variable.

#include <iostream>
using namespace std;

int main() {
    int a, b, temp;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swapping: a = " << a << " and b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping: a = " << a << " and b = " << b << endl;
    return 0;
}
