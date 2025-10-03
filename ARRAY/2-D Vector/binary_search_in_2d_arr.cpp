// BINARY SEARCH IN 2-D decreasing VECTOR(MATRIX) :-  

#include<iostream>
#include<vector>
using namespace std;

bool binarySearch2D(vector<vector<int>> matrix, int n, int m, int target){
    int start = 0, end = m*n-1;
    
    while(start<=end){
        int mid = start+(end-start)/2;
        int row_idx = mid / m;
        int col_idx = mid % m;
        
        if(matrix[row_idx][col_idx] == target) return true;
        else if(matrix[row_idx][col_idx] < target) end = mid-1;
        else start = mid+1;
    }

    return false;
}



int main(){
    vector<vector<int>> matrix = {{15,14,13,12}, {11,10,9,8}, {7,6,5,4}};

    int n = matrix.size();                 // no of rows
    int m = matrix[0].size();              // no of columns 

    int target = 10;

    // BINARY SEARCH in 2-D Matrix :-

    if(binarySearch2D(matrix, n, m, target)) cout<<"Element is present in Matrix";
    else cout<<"Element is not present in Matrix;";


    return 0;
}