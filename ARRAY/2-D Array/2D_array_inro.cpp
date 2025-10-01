// 2-D Array Introduction :-

#include<iostream>
using namespace std;

void printCol(int arr[][4], int row, int col){    // int arr[][4] = column mention krna jruri hai , row optional
    for(int j=0; j<col; j++){                    // for columns
        for(int i=0; i<row; i++){               // for rows 
            cout<<arr[i][j]<<" ";              // 2 10 18 4 12 20 6 14 22 8 16 24
        }
    }
}

bool findElement(int arr[3][4], int row, int col, int target){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==target) return true;
        }
    }
    return false;
}

int main(){
    // 2-D Array Creation 
    int arr[3][4] = {{2,4,6,8}, {10,12,14,16}, {18,20,22,24}};   // total elements = (no. of rows)*(no. of column)

    // Print the array (row wise)
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";      // 2 4 6 8 10 12 14 16 18 20 22 24 
        }
    }
    cout<<endl;

    // print the array (column wise) using function call
    printCol(arr, 3, 4);
    cout<<endl;

    // find an element in an array
    if(findElement(arr,3,4,21)){
        cout<<"Element found";
    }
    else cout<<"Element not found";                 // Element not found
    






    return 0;
}