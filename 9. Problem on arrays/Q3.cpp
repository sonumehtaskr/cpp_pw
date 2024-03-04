/* ​Given an integer array arr consisting of 0’s and 1’s only, return the max length of
sequence which contains equal numbers of 0 and 1. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0, max = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i] == 0 ? -1 : 1;
        if (sum == 0) {
            max = i + 1;
        }
    }
    cout << max;
    return 0;
}