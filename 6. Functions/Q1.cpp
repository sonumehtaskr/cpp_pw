//Write a function to print squares of the first 5 natural numbers.

#include <iostream>
#include <cmath>
using namespace std;

void printSquares(int n)
{
        cout << pow(n, 2) << " ";
}

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printSquares(i);
    }
    return 0;
}