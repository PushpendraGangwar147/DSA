// Print sum of all diagonal :-

#include<iostream>
using namespace std;

int main(){
    int matrix[4][4] = {{5,8,3,9}, {6,2,8,4}, {5,3,2,2}, {2,8,1,9}};

    int right_diagonal_sum = 0;
    int left_diagonal_sum = 0;

    // Right Diagonal Sum :-        if(i==j) sum += arr[i][j];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i==j) right_diagonal_sum += matrix[i][j];
        }
    }

    // Left Diagonal Sum :-         sum += arr[i][n-i-1];
    for(int i=0; i<4; i++){
        left_diagonal_sum += matrix[i][3-i];            // j = n-i
    }
    

    cout<<"Left Diagonal Sum : "<<left_diagonal_sum<<endl;          // Left Diagonal Sum : 22
    cout<<"Right Diagonal Sum : "<<right_diagonal_sum;              // Right Diagonal Sum : 18


    return 0;
}