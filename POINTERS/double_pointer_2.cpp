// Double Pointer (Part-2) :-

#include<iostream>
using namespace std;

// Changing Address of variable n 
void fun(int **ptr1)
{
    *ptr1 = *ptr1 + 1;
}

int main()
{ 
    int n = 5;            // variable
    
    int *p1 = &n;        // single pointer 
    int **p2 = &p1;      // double pointer

    // function ki help se pointer "p1" ka address change karo

    cout<<"Current Address of varible p1 : "<< p1 << endl;      // Current Address of varible p1 : 0x61ff08
    fun(p2);
    cout<<"Modified Address of varibale p1 : "<<p1 << endl;      // Modified Address of varibale p1 : 0x61ff0c


    return 0;
}