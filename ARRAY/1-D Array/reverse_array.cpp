// Reverse Array :-

#include<iostream> 
using namespace std;
void reverseArray(int arr[],int n){
    for(int i=0; i<n/2;i++){
        swap(arr[i],arr[n-i-1]);
    }
    cout<<"Reversed Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";                // Reversed Array : 1 4 6 5 3 2 
    }
}

int main(){
    int arr[] = {2,3,5,6,4,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    reverseArray(arr,n);

    return 0;
}



// Logic ko likhne ka achha tareeka :-

/*
    int i = 0;
    int j = n-i-1;

    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
*/
