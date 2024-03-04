/* - Given an integer array and two integers L and R. Find the sum of elements between the
index L and index R.
Note: Both L and R inclusive. */

#include <iostream>
using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = l; i <= r; i++) {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}