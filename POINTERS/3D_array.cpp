// DYNAMIC MEMORY ALLOCATION OF 3-D ARRAYS :-     (3-D Array = 1-D + 2-D Array)

#include<iostream>
using namespace std;

int main()
{
    int L, B, H;
    cout<< "Enter the values of length, weidth & height of 3-D Array : ";
    cin>> L>> B>> H;

    int ***ptr = new int **[L];   // ye pointer 2-D arrays ke point krega

    // 2-D array create kro
    for(int i=0; i<B; i++){
        ptr[i] = new int *[B];
        for(int j=0; j<B; j++){
            ptr[i][j] = new int [H];
        }
    }

    // ab array me elements dalo
    cout<< "Enter the elements in 3-D array : ";
    for(int i=0; i<L; i++){
        for(int j=0; j<B; j++){
            for(int k=0; k<H; k++){
                cin >> ptr[i][j][k];
            }
        }
    }

    // ab elements ko print kro
    cout<< "The elements are : ";
    for(int i=0; i<L; i++){
        for(int j=0; j<B; j++){
            for(int k=0; k<H; k++){
                cout<< ptr[i][j][k] << " ";
            }
        }
    }

    // Release the heap memory 
    for(int i=0; i<L; i++){
        for(int j=0; j<B; j++){
            delete[] ptr[i][j];
        }
        delete ptr[i];
    }

    delete[] ptr;
    
    
    return 0;
}