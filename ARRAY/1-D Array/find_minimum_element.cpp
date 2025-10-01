// Find minimum elemnet from the Array :-

#include<iostream>
#include <climits>
using namespace std;

int Minimum(int arr[], int n){
    int min = INT_MAX;
    for(int i=0; i<n;i++){
        if(min>arr[i]) min=arr[i];
    }
    return min;
}

int main(){
    int n, arr[10];
    cout<<"Enter the size of array : ";
    cin>>n;

    cout<<"Enter the elements in array : ";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    cout<<"Minimum element : "<<Minimum(arr,n);


    return 0;
}