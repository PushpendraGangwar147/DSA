// Print Array using Recursion :-

#include<iostream>
using namespace std;

// print array
void printArray(int arr[], int idx, int n){
    if(idx == n) return;

    cout<< arr[idx]<<" ";
    printArray(arr, idx+1, n);
}

// print reverse of array
void printReverse(int arr[], int idx){
    if(idx == -1) return;

    cout<< arr[idx]<<" ";
    printReverse(arr, idx-1);
}


int main()
{
    int arr[] = {3,7,6,2,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    // print array
    printArray(arr,0,n);             // 3 7 6 2 8 
    cout<< endl;

    // print reverse of array
    printReverse(arr, n-1);          // 8 2 6 7 3 


    return 0;
}