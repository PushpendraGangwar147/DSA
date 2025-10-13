// DYNAMIC MEMORY ALLOCATION OF 2-D ARRAYS :-

#include<iostream>
using namespace std;

int main()
{
    // Create 2-D Array 
    int n, m;   // n - rows    &    m - columns
    cout<<"Enter the no of rows and columns : ";
    cin>> n>> m;

    int **ptr = new int *[n];   // ye us array ko point kr rha hai jo 1-D arrays ke address ko rakhta hai

    // create 2-d array
    for(int i=0; i<n; i++){
        ptr[i] = new int[m];
    }

    // store the values in 2-d array
    cout<< "Enter the elements in array : ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> ptr[i][j];
        }
    }

    // print the values of 2-d array
    cout<< "The elements are : ";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<< ptr[i][j] <<" ";
        }
    }

    // Release the heap memeory 
    for(int i=0; i<n; i++){
        delete[] ptr[i];
    }
    delete []ptr;


    return 0;
}