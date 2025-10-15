// PRINT EVEN NUMBERS USING RECURSION :-

#include<iostream>
using namespace std;

// Method 1 
void print(int n, int num){
    if(num > n) return ;

    cout<< num <<" ";
    print(n, num+2);
}

// Method 2 (using single argument)
void print_even(int n){
    if(n < 2) return ;

    print_even(n-2);
    cout<< n <<" ";
}

int main(){

    int n = 15;

    // Method 1 
    print(n, 2);
    cout<< endl;

    // Method 2 (using sinle argument)
    if(n%2 == 0) print_even(n);
    else print_even(n-1);
    

    return 0;
}