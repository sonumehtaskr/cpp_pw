/* Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
that they belong to different arrays and are not at the same index. Here 1<size<101 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && a[i] + b[j] < min) {
                min = a[i] + b[j];
            }
        }
    }
    cout << "Minimum sum: " << min << endl;
    return 0;
}