// POINTER Introduction :-

#include<iostream>
using namespace std;

int main()
{ 
    // Print the address of variable "a"
    int a = 10;                      
    int* ptr1 = &a;                   // ptr pointer varibake "a" ka memory address store karega (HEXADECIMAL form me)
    cout<<"a = "<< a <<endl;         // a = 10
    cout<< &a <<endl;                // 0x61ff08
    cout<< ptr1 << endl;             // 0x61ff08

    // Print the address of variable "b"
    float b = 3.14;
    cout<< "b = "<< b <<endl;         // b = 3.14
    float* ptr2 = &b;
    cout<< ptr2 << endl;              // 0x61ff00

    // size of pointer :-             yadi system 4GB ka hai to always ptr ka size 4 bytes hi hoga 
    cout<< sizeof(ptr1) <<endl;       // 4
    cout<< sizeof(ptr2) <<endl;       // 4

    // DeReference Operator :-   *
    int c = 69;
    cout<<"c = "<< c <<endl;         // c = 69
    int *ptr3 = &c;
    cout<< *ptr3 <<endl;             // 69 (c ki value print ke dega)
    
    

    return 0;
}