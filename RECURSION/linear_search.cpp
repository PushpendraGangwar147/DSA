// Linear Search using Recursion :-

#include<iostream>
#include<vector>
using namespace std;

bool find_target(vector<int> &v, int x, int start, int end){
    if(start == end+1) return false;

    if(v[start] == x) return true;
    return find_target(v, x, start+1, end);
}

int main(){
    vector<int> v = {2,4,7,3,11,8,12};
    int x = 8;      // 8 ko search krna hai

    int start = 0;
    int end = v.size()-1;

    if(find_target(v, x, start, end)){
        cout<<"Found";                          // Found
    }
    else cout<<"Not Found";

    return 0;
}