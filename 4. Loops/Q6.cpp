//Write a program to print alphabet diamond pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        char ch = 'A';
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << ch;
            if (j < i) {
                ch++;
            } else {
                ch--;
            }
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        char ch = 'A';
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << ch;
            if (j < i) {
                ch++;
            } else {
                ch--;
            }
        }
        cout << endl;
    }
    return 0;
}