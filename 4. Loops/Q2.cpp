/* Write a program to print all Armstrong numbers between 100 to 500. 
A three digit number is called the Armstrong number if the sum of the cube of its digit is equal to the number itself. 
For example, 153 is an Armstrong number because (1^3)+(5^3)+(3^3) = 153. */

#include <iostream>
using namespace std;

int main() {
    for (int i = 100; i <= 500; i++) {
        int sum = 0;
        int originalNum = i;
        while (originalNum > 0) {
            int lastDigit = originalNum % 10;
            sum += lastDigit * lastDigit * lastDigit;
            originalNum /= 10;
        }
        if (sum == i) {
            cout << i << endl;
        }
    }
    return 0;
}