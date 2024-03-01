/* Given an integer array and its size, find the sum of the greatest and 
the smallest integer present in the array. Here 1< size <101 */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Sum: " << max + min << endl;
    return 0;
}