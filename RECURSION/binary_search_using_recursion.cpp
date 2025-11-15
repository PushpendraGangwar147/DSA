// Binary Search using Recursion :-

#include<iostream> 
#include<vector>
using namespace std;

int find_target(vector<int> &v, int x, int start, int end){
    if(start > end) return -1;    // base case

    int mid = start + (end-start)/2;
    // case 1 
    if(v[mid]==x) return mid;    // element milne par index return kr diya
    // case 2
    else if(v[mid] < x)   return find_target(v, x, mid+1, end);
    // case 3
    else   return find_target(v, x, start, mid-1);
}

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};     // binary search sif sorted array pe hi apply hota hai
    int x = 5;     // target                    
    int start = 0;
    int end = v.size()-1;

    cout<< x <<" found at index : "<< find_target(v, x, start, end);    // 5 found at index : 4 

    return 0;
}