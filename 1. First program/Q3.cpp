//Write a C++ program to take length and breadth of a rectangle and print its area.

#include <iostream>
using namespace std;

int main() {
    int length, breadth;
    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle is " << length * breadth << endl;
    return 0;
}