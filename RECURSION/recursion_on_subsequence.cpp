// Recursion on Subsequence :-

#include<iostream>
#include<vector>
using namespace std;

void subsequence(vector<int> &arr, int idx, int n, vector<vector<int>> &ans, vector<int> temp){
    if(idx == n){
        ans.push_back(temp);
        return;
    }
    // case 1 : element arr[idx] is not included
    subsequence(arr, idx+1, n, ans, temp);

    // case 2 : element arr[idx] is included
    temp.push_back(arr[idx]);
    subsequence(arr, idx+1, n, ans, temp);  
}


int main(){
    vector<int> arr = {1,2,3};

    vector<int> temp;
    vector<vector<int>> ans;

    subsequence(arr, 0, arr.size(), ans, temp);

    // ab vector "ans" ko print kr do
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){    
            cout<< ans[i][j] <<" ";              
        }
        cout << endl;
    }

    return 0;
}


/*

Output :- 

3 
2
2 3
1
1 3
1 2
1 2 3

*/
