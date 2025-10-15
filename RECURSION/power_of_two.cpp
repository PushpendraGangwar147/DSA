// Power of 2 using recursion :-

#include<iostream>
using namespace std;

int power(int num, int n){
    if(n==0) return 1;
    if(n == 1) return 2;

    return (2* power(2, n-1));
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin >> n;

    cout<<"The Power of 2 is : "<< power(2, n);


    return 0;

}
