/* Write a user defined function upper() which takes an integer square matrix as an input and
its size N and prints the upper half of the matrix. */

#include <iostream>
#include <vector>
using namespace std;

void input2DVector(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }
}

void upper(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();
    for (int i = 0; i < row/2; i++){
        for (int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int N;
    cin>>N;
    vector<vector<int>>matrix(N,vector<int>(N));
    input2DVector(matrix);
    upper(matrix);
    return 0;
}