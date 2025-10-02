// Divide Array in 2 subarray with equal sum :-

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool chekPrefix(vector<int> arr, int total_sum){
    int prefixSum = 0, suffixSum = 0;
    
    for(int i=0; i<arr.size();i++){
        prefixSum += arr[i];
        suffixSum = total_sum - prefixSum;
        if(prefixSum == suffixSum) return 1;
    }
    return 0;
}

int main(){
    vector<int> arr = {3,4,-2,5,8,20,-10,8};
    int n = arr.size();

    int total_sum = 0;
    // total sum of array :-
    for(int i=0; i<n; i++){
        total_sum += arr[i];
    }

    // prefix sum and suffix sum :-
    if(chekPrefix(arr,total_sum)) cout<<"Array can be divided into two subarrays";
    else cout<<"Array can't be divided into 2 subarrays";
    

    return 0;
}