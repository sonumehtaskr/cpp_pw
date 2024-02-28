// Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and calculate Profit or Loss.

#include <iostream>
using namespace std;

int main() {
    int cp, sp;
    cout << "Enter the cost price and selling price: ";
    cin >> cp >> sp;
    if (cp > sp) {
        cout << "Loss of " << cp - sp;
    } else if (sp > cp) {
        cout << "Profit of " << sp - cp;
    } else {
        cout << "No profit no loss";
    }
    return 0;
}