// Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    cout << "Odd: " << odd << endl;
    cout << "Even: " << even << endl;
    return 0;
}