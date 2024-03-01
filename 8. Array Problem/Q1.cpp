/* Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
two arrays into a single sorted array of size m+n. */

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int arr1[m], arr2[n];
    for (int i = 0; i < m; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    int arr3[m + n];
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < m) {
        arr3[k++] = arr1[i++];
    }
    while (j < n) {
        arr3[k++] = arr2[j++];
    }
    for (int i = 0; i < m + n; i++) {
        cout << arr3[i] << " ";
    }
    return 0;
}