//- Given two numbers a and b, write a program to print all the prime numbers present between a and b.

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}  

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}   