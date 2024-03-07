/* A square matrix is said to be an perfect Matrix if both of the following conditions hold:
a) All the elements in the diagonals of the matrix are non-zero integers.
b) All other elements except the diagonal elements are 0.
Given a 2D integer array grid of size n x n representing a square matrix, return true if grid
is a perfect matrix. Otherwise, return false using functions. */

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

bool isPerfect(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            if(i==j & arr[i][j] == 0 ){
                cout<<"No";
                return false;
            }
            if(i != j && arr[i][j] != 0){
                cout<<"No";
                return false;
            }
        }
    }
    cout<<"Yes";
    return true;
}

int main(){
    int N;
    cin>>N;
    vector<vector<int>>matrix(N,vector<int>(N));
    input2DVector(matrix);
    cout<<isPerfect(matrix);
    return 0;
}