/* Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
a pair in the array whose sum is exactly x. */

#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int i = 0, j = n - 1;
    while (i < j) {
        if (arr[i] + arr[j] == x) {
            cout << "Yes";
            return 0;
        } else if (arr[i] + arr[j] < x) {
            i++;
        } else {
            j--;
        }
    }
    cout << "No";
    return 0;
}