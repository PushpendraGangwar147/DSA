// Double Pointer (Part-1) :-

#include<iostream>
using namespace std;

void fun1(int *ptr){
    *ptr = *ptr + 10;
}


int main()
{   // Nth pointer can contain only (N-1)th pointer's address

    int n = 10;

    int *p1 = &n;           // single pointer (holds the address of varibale n)
    int **p2 = &p1;         // double pointer (holds the address of pointer p1)
    int ***p3 = &p2;        // triple pointer (holds the address of pointer p2)

    cout<< p1 <<endl;       // 0x61ff0c  =  address of varibale n
    cout<< &p1 <<endl;      // 0x61ff08  =  address of pointer p1
    cout<< p2 <<endl;       // 0x61ff04  =  address of pointer p1
    cout<< &p2 <<endl;      // 0x61ff00  =  address of pointer p2
    cout<< p3 <<endl;       // 0x61ff00  =  address of pointer p2

    // varibale "n" ki value ko modify krna :-

    // (1) with the help of pointer p1
    *p1 = *p1 + 5;
    cout<< n <<endl;        // 15
    // (1) with the help of pointer p2
    **p2 = **p2 + 5;
    cout<< n <<endl;        // 20
    // (1) with the help of pointer p3
    ***p3 = ***p3 + 5;
    cout<< n <<endl;        // 25

    // function ki help se variable "n" ki value ko modify krna 

    fun1(p1);
    cout<<"n = "<<n <<endl;  // n = 35               (n ki current value 25 me 10 add ho gaya)

    return 0;
}