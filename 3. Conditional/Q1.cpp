//Write a program which takes the values of length and breadth from user and check if it is a square or not.

#include <iostream>
using namespace std;

int main() {
    int length, breadth;
    cout << "Enter the length and breadth: ";
    cin >> length >> breadth;
    if (length == breadth) {
        cout << "It is a square";
    } else {
        cout << "It is not a square";
    }
    return 0;
}
