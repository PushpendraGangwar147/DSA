// Print row index with maximum sum :-

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[5][4] = {{8,4,7,8}, {2,8,3,9}, {5,40,2,2}, {7,3,0,8}, {2,8,9,1}};
    vector<int> v;

    // find row_sum of each row and push_back into an vector
    for(int i=0; i<5; i++){
        int row_sum = 0;
        for(int j=0; j<4; j++){
            row_sum += arr[i][j];
        }
        v.push_back(row_sum);
    }

    // find maximum sum from vector
    int max_sum = 0;
    for(int i=0; i<v.size(); i++){
        max_sum = max(max_sum,v[i]);
    }

    // find index of max_sum
    int idx;
    for(int i=0; i<v.size(); i++){
        if(v[i]==max_sum) idx=i;
    }

    // print the index 
    cout<<"The idex of row which has maximum sum is : "<<idx;    // The idex of row which has maximum sum is : 2


    return 0;
}