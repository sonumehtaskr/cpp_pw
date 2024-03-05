/* - Given a 2D matrix with m rows and n columns containing integers, find and print the
maximum value present in the array. */

#include <iostream>
using namespace std;

int main(){
    int row, col;
    cin>>row>>col;
    int arr[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int max = arr[0][0];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>max){
                max = arr[i][j];
            }
        }
    }
    cout<<"Max of arr "<<max;
    return 0;
}