// Sum of all elements in Array using Recursion :-

#include<iostream>
using namespace std;

int sum(int arr[], int idx, int n){
    if(idx == n) return 0;

    return arr[idx] + sum(arr,idx+1,n);
}


int main()
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    // sum of all elements in array :-
    cout<<"Sum of all elements : "<< sum(arr,0,n);      // Sum of all elements : 150


    return 0;
}