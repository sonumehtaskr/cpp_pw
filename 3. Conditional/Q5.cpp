// Create a calculator using switch statement to perform addition, subtraction, multiplication and division.

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter the operator: ";
    cin >> op;
    switch (op) {
        case '+':
            cout << "Sum: " << num1 + num2;
            break;
        case '-':
            cout << "Difference: " << num1 - num2;
            break;
        case '*':
            cout << "Product: " << num1 * num2;
            break;
        case '/':
            cout << "Quotient: " << num1 / num2;
            break;
        default:
            cout << "Invalid operator";
    }
    return 0;
}
