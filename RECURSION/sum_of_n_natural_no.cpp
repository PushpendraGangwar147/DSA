// Sum of N Natural Numbers :-

#include<iostream>
using namespace std;

int sum(int n){
    if(n==1) return 1;

    // int ans = n + sum(n-1);
    // return ans;
    // OR
    return (n + sum(n-1));          // dono tarah se likh sakte hain, but direct return wala jyada better hai

}

int main()
{
    int n ; 
    cout<<"Enter the number : ";
    cin>> n;

    if(n > 0){
        cout << "Sum of n natural numbers is : "<< sum(n);
    }
    else{
        cout<<"Enter valid number";
    }

    return 0;
}