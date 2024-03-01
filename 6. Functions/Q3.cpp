//Given the age of a person, write a function to check if the person is eligible to vote or not.

#include <iostream>
using namespace std;

void checkEligibility(int age)
{
    if (age >= 18)
    {
        cout << "Eligible to vote";
    }
    else
    {
        cout << "Not eligible to vote";
    }
}

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    checkEligibility(age);
    return 0;
}