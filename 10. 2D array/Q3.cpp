/* Given a m*n integer matrix. If an element of the matrix is 0 then set the complete row and
column of that element to 0. Make the changes inplace and print the matrix. */

#include <iostream>
#include <vector>
using namespace std;

void input2DVector(vector<vector<int>> &arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void print2dVector(vector<vector<int>> &arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

bool checkZero(vector<vector<int>> &matrix, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int m, n;
    cin>>m>>n;
    vector<vector<int>> matrix(m, vector<int>(n));

    input2DVector(matrix, m, n);

    if (checkZero(matrix, m, n))
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }

    print2dVector(matrix,m,n);
    return 0;
}