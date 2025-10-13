// MEMORY ALLOCATION :-

#include<iostream>
using namespace std;

int main()
{
    // VARIBLE KE LIYE MEMEORY ALLOCATION (using new Keyword)

    // (1) memory allocation for int -
    int *ptr1 = new int;  // pointer to stack me create hoga aur us location ka address store karega jo heap me allocate hui h
    cout<< ptr1 <<endl;                 // 0x10e1ca0   (aalocated address in heap)
    *ptr1 = 5;                          // 5 ko heap me dal diya 
    cout<< *ptr1 <<endl;                // 5

    // (2) memory allocation for float -
    float* ptr2 = new float;
    *ptr2 = 5.3;
    cout<< *ptr2 <<endl;                // 5.3

    // (3) memory allocation for array -
    int n;
    cout<< "Enter the size of array : ";
    cin>> n;
    int *ptr3 = new int[n];             // poniter array ke first element (0-index) ka address store kar lega
    // ab array me value dalo
    for(int i=0; i<n; i++){
        ptr3[i] = i+1;
    }
    // ab array ki value print kara do
    for(int i=0; i<n; i++){
        cout<< ptr3[i]<<" ";            // 1 2 3 4 5
    }

    // "delete" Keyword ka use :-   (heap me allocated memory delete ho jayegi)

    delete ptr1;
    delete ptr2;
    delete[] ptr3;

    
    return 0;
}