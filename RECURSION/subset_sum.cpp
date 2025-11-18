// Recursion on Subset Sum :-

#include<iostream>
#include<vector>
using namespace std;

void print_subsets(vector<int> &arr, int sum , int idx, int n){
    // base case
    if(idx == n){
        cout<<sum <<" ";            // 0 5 4 9 3 8 7 12
        return;
    }
    
    // case 1 : element "arr[idx]" include mat karo
    print_subsets(arr, sum, idx+1, n);

    // case 2 : element "arr[idx]" include kr lo
    print_subsets(arr, sum + arr[idx], idx+1, n);

}

int main(){
    vector<int> arr = {3,4,5};
    int sum = 0;

    print_subsets(arr, sum, 0, arr.size());         

    return 0;
}