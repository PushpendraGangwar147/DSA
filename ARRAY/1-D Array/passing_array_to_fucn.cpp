// Passing Array to Function :-

#include<iostream>
using namespace std;

void fun(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<sizeof(arr);                  // O/P : 4 
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<sizeof(arr)<<endl;                 // O/P : 24

    fun(arr,n);

    return 0;
}
