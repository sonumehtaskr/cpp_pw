//Write a program to calculate marks to grades . Follow the conversion rule as given below

#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;
    if (marks >= 90) {
        cout << "Grade A";
    } else if (marks >= 80) {
        cout << "Grade B";
    } else if (marks >= 70) {
        cout << "Grade C";
    } else if (marks >= 60) {
        cout << "Grade D";
    } else if (marks >= 40) {
        cout << "Grade E";
    } else {
        cout << "Grade F";
    }
    return 0;
}
