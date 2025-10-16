// Minimum element in Array using Recursion :-

#include<iostream>
using namespace std;

int minimum(int arr[], int idx, int n){
    if(idx==n-1) return arr[n-1];

    return min(arr[idx], minimum(arr,idx+1,n));
}

int main()
{
    int arr[] = {7,2,4,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Minimum element of array is : "<< minimum(arr,0,n);

    return 0;
}