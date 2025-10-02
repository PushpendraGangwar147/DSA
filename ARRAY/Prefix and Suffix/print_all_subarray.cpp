// Print all the Subarrays of an Array :-

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();

    // start = starting postion of subarray
    // end = ending position of subarray
  
    for(int start=0; start<n; start++){
        for(int end = start; end<n; end++){
            for(int i=start ; i<=end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}

// OUTPUT :

// Time Complexity : O(n^3)     (Brute Force Approach)

// 1 12 123 1234 12345 
// 2 23 234 2345
// 3 34 345
// 4 45
// 5

