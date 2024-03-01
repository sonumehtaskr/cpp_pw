/* Given a vector arr[] sorted in increasing order. Return an array of squares of each
number sorted in increasing order. Where size of vector 1<size<101. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int i = 0, j = n - 1;
    int arr2[n];
    for (int k = n - 1; k >= 0; k--) {
        if (arr[i] * arr[i] > arr[j] * arr[j]) {
            arr2[k] = arr[i] * arr[i];
            i++;
        } else {
            arr2[k] = arr[j] * arr[j];
            j--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}