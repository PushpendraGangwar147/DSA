// Search an element in an array (GFG) :-

#include<iostream>
using namespace std;

int Search(int arr[],int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
            break;
        }
    }

    return -1;                  // -1 indicates that element is not present in the array
}

int main(){
    int arr[5] = {2,4,54,33,21};
    int x = 3;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Element found at index : "<<Search(arr,n,x);   

    return 0;
}