/* Given a vector arr[] sorted in increasing order of n size and an integer x, find the number
of unique pairs that exist in the array whose absolute sum is exactly x. */

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
    int count = 0;
    while (i < j) {
        if (arr[i] + arr[j] == x) {
            count++;
            i++;
            j--;
        } else if (arr[i] + arr[j] < x) {
            i++;
        } else {
            j--;
        }
    }
    cout << count;
    return 0;
}