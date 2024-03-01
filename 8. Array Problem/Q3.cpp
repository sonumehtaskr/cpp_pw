/* Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
a pair in the array whose absolute difference is exactly x. */

#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int i = 0, j = 1;
    while (j < n) {
        if (arr[j] - arr[i] == x) {
            cout << "Yes";
            return 0;
        } else if (arr[j] - arr[i] < x) {
            j++;
        } else {
            i++;
        }
    }
    cout << "No";
    return 0;
}