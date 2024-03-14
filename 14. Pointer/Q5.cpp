//Write a function that returns the first character, last character and the number of
// occurrences of ‘t’ in a string input by user.

#include <iostream>
using namespace std;

void analyzeString(const char* input, char& firstChar, char& lastChar, int& countT) {
    firstChar = *input;  // First character of the string
    const char* end = input;
    while (*end != '\0') {
        lastChar = *end; // Last character of the string
        if (*end == 't' || *end == 'T') {
            countT++; // Count of occurrences of 't'
        }
        end++;
    }
}

int main() {
    char userInput[100];
    cout << "Enter a string: ";
    cin.getline(userInput, sizeof(userInput));

    char firstChar, lastChar;
    int countT = 0;
    analyzeString(userInput, firstChar, lastChar, countT);

    cout << "First character: " << firstChar << endl;
    cout << "Last character: " << lastChar << endl;
    cout << "Number of occurrences of 't': " << countT << endl;

    return 0;
}
