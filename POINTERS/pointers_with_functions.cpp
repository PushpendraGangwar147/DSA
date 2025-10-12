// Pointers relation with functions :-

#include<iostream>
using namespace std;

// swap 2 values (Method - 1) using reference variable
void swapping1(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// swap 2 value (Method - 2) using pointer 
void swapping2(int* ptr1, int* ptr2)
{    
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    // swap 2 values (Method - 1) using reference variable
    int  a = 10;
    int b = 20;
    swapping1(a, b);
    cout<<"a = "<<a<<", "<<"b = "<<b <<endl;            // a = 20, b = 10

    // swap 2 value (Method - 2) using pointer 
    int first = 50, second = 100;
    swapping2(&first, &second);                         // call by reference
    cout<<"first = "<<first<<", "<<"second = "<<second <<endl;   // first = 100, second = 50  


    return 0;
}
