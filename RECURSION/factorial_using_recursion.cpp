// Factorial of a number using recursion :-

#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==1 || n==0) return 1;

    return n*fact(n-1);
   
}


int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>> n;

    if(n < 0) cout<<" Factorial is defined for negative numbers";

    cout<<"Factorial : "<< fact(n) ;

    return 0;
}