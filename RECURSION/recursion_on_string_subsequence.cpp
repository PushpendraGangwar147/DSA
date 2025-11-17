// Recursion on String Subsequence :-

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void subsequence(string &s, int idx, int n, vector<char> & temp, vector<vector<char>> &ans){
    if(idx == n){                  // base case
        ans.push_back(temp);
        return;
    }
    // case 1 : element (s[idx]) is included
    temp.push_back(s[idx]);
    subsequence(s, idx+1, n, temp, ans);

    temp.pop_back();
    // case 2 : element is included
    subsequence(s, idx+1, n, temp, ans);    
}


int main(){
    string s = "abc";

    vector<vector<char>> ans;
    vector<char> temp;

    subsequence(s, 0, s.size(), temp, ans);

    // print the subsequences 
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<< ans[i][j] <<" ";
        }
        cout<<endl;
    }

    return 0;
}


/*

Output :-

a b c 
a b
a c
a
b c
b
c


*/