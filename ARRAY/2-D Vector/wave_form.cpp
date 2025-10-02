// Wave form of 2-D Vector :-

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printWave(vector<vector<int>> matrix, int n, int m){
    for(int col=0; col<m; col++){
        if(col%2==0){
            for(int row=0; row<n; row++) cout<<matrix[row][col]<<" ";
        }
        else{
            for(int row=n-1; row>=0; row--) cout<<matrix[row][col]<<" ";
        }
    }
}

int main(){
    vector<vector<int>> matrix = {{3,6,4,2}, {7,8,11,5}, {9,3,2,1}, {17,8,5,9}};

    int n = 4;              // No of rows
    int m = 4;              // No of columns

    // Print the wave form  
    printWave(matrix,4,4);

    return 0;
}