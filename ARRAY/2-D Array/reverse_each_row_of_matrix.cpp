// Reverse each row of Matrix :-

#include<iostream>
using namespace std;

int main(){
    int n = 3;       // number of rows
    int m = 4;       // number of columns
    int matrix[3][4] = {{2,3,4,5}, {1,2,6,8}, {4,9,3,2}};

    // reversing each row of matrix :-
    for(int i=0; i<n; i++){
        for(int j=0; j<m/2; j++){
            swap(matrix[i][j], matrix[i][m-j-1]) ;        // swap (matrix[i][j], matrix[i][m-j-1])
        }
    }

    // print the matirx :-
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<matrix[i][j]<<" ";                      // 5 4 3 2 
        }                                                 // 8 6 2 1                                                    
        cout<<endl;                                       // 2 3 9 4
    }

    return 0;
}
