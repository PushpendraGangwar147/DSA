// Add 2 Matices 

#include<iostream>
using namespace std;

int main(){
    int matrix1[3][4] = {{2,3,4,5}, {0,1,2,3}, {1,2,6,4}};
    int matrix2[3][4] = {{3,4,1,2}, {2,2,2,0}, {1,3,5,4}};
    int ans_matrix[3][4];
    
    // add the matrices
    for(int i=0; i<3; i++){                                           // for rows
        for(int j=0; j<4; j++){                                       // for columns
            ans_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // print the matrices 
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<ans_matrix[i][j]<<" ";                               // 5 7 5 7 2 3 4 3 2 5 11 8 
        }
    }

    return 0;
}