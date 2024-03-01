//Given radius of a circle. Write a function to print the area and circumference of the circle.

#include <iostream>
using namespace std;

void printAreaAndCircumference(int radius)
{
    cout << "Area: " << 3.14 * radius * radius << endl;
    cout << "Circumference: " << 2 * 3.14 * radius << endl;
}

int main()
{
    int radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    printAreaAndCircumference(radius);
    return 0;
}