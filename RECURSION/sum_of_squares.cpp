// Sum of squares of n numbers :-

#include<iostream>
using namespace std;

int sum(int n){
    if(n==1) return 1;

    return (n*n + sum(n-1));
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>> n;

    cout<<"The sum of squares is : "<< sum(n);


    return 0;
}