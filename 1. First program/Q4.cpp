//Write a C++ program to calculate the cube of a number.
#include <iostream>
using namespace std;

int main() {
    int num, cube;
    cout << "Enter a number: ";
    cin >> num;
    cube = num * num * num;
    cout << "Cube of " << num << " = " << cube;
    return 0;
}