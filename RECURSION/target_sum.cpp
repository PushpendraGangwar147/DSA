// Target Sum using Recursion -

#include<iostream>
#include<vector>
using namespace std;

bool find_target(vector<int> &arr, int target, int idx, int n){
    // base cases 
    if(target == 0) return 1;
    if(idx == n || target < 0) return 0;
    
    // 2 cases honge :- (1) arr[idx] include kro (2) arr[idx] include na karo
    // yadi dono cases me se kisi ek se answer mil gaya to return kar do

    return find_target(arr, target-arr[idx], idx+1, n) || find_target(arr, target, idx+1, n);
}

int main(){
    vector<int> arr = {3,6,4,5};
    int n = arr.size();
    int target = 12;

    if(find_target(arr, target, 0, n))  cout<<"Target found";        // Target found
    else cout <<"Target not found";


    return 0;
}