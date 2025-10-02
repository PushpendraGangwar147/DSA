// Spiral Form :-

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>> matrix = {{1,2,3,4,5,6}, {7,8,9,10,11,12}, {13,14,15,16,17,18}, 
    {19,20,21,22,23,24}, {25,26,27,28,29,30}, {31,32,33,34,35,36}};

    int n = 6;      // No of rows 
    int m = 6;     // No of columns

    int top_row = 0;
    int right_column = 5;
    int bottom_row = 5;
    int left_column = 0;

    while(top_row <= bottom_row && left_column <= right_column)
    {
        // top row 
        for(int i=left_column; i<=right_column; i++)    cout<<matrix[top_row][i]<<" ";
        top_row++;
        cout<<endl;

        // right column 
        for(int i=top_row; i<=bottom_row; i++)    cout<<matrix[i][right_column]<<" ";
        right_column--;
        cout<<endl;

        // bottom row 
        for(int i=right_column; i>=left_column; i--)   cout<<matrix[bottom_row][i]<<" ";
        bottom_row--;
        cout<<endl;
        
        // left column 
        for(int i=bottom_row; i>=top_row; i--)   cout<<matrix[i][left_column]<<" ";
        left_column++;
        cout<<endl;
    }

    
    return 0;
}