// Sum of Digits of a Number (Using Recursion) 

#include<iostream>
using namespace std;

int digital_sum(int n, int &sum){
    if(n==0) return 0;

    int rem = n % 10;
    sum += rem;

    return digital_sum(n/10, sum);
}

int main(){
    int n = 12345;
    int sum = 0;

    digital_sum(n, sum);

    cout<< "Sum of digits : "<< sum ;       // Sum of digits : 15

    return 0;
}