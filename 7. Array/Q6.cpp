/* Given an integer array containing n elements. Find the element in the array for which all the elements
to its left are smaller than it and all the elements to the right of it are larger than it. Here 1<n<101. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int leftMax[n], rightMin[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    leftMax[0] = arr[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], arr[i]);
    }
    rightMin[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMin[i] = min(rightMin[i + 1], arr[i]);
    }
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > leftMax[i - 1] && arr[i] < rightMin[i + 1]) {
            cout << "Element: " << arr[i] << endl;
            return 0;
        }
    }
    cout << "No such element found" << endl;
    return 0;
}