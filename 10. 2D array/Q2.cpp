/* You are given a n*n square matrix, you need to rotate the matrix by 90 degrees in
clockwise direction. You need to do it in-place i.e. you are not allowed to make a new
matrix and allocate the elements to it. Make the changes in the same matrix and print it.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];

    // taking array as input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // now miroring it around horizontal center
    for (int i = 0; i < n; i++)
    {
        int left = 0, right = n - 1;
        while (left < right)
        {
            swap(arr[i][left++], arr[i][right--]);
        }
    }

    // printing the rotated array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}