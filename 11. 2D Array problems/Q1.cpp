/* Given a m*n matrix, Write a function which returns true if the matrix is a perfect matrix. A matrix is
called perfect if every diagonal from top-left to bottom-right has the same elements. */

#include <iostream>
#include <vector>
using namespace std;

void input2DVector(vector<vector<int>> &arr)
{
    int col = arr.size();
    int row = arr[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

bool perfectMatrix(vector<vector<int>> &matrix, int m, int n) {
    // Check diagonals starting from top-left corner to bottom-right corner
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            // If any diagonal element is different from the one preceding it, return false
            if (matrix[i][j] != matrix[i-1][j-1]) {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int m, n;
    cin >> m>>n;
    vector<vector<int>> matrix(m, vector<int>(n));
    input2DVector(matrix);
    cout<<perfectMatrix(matrix,m,n);
    return 0;
}