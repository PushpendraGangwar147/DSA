// Generate Paranthesis using recursion :-

#include<iostream> 
#include<vector>
#include<string>
using namespace std;

void generate_paranthesis(vector<string> &ans, string &temp, int n, int left, int right){
    if(right == n && left == n){
        ans.push_back(temp);
        return;
    }

    // pahle left paranthesis "(" add hoga
    if(left < n){
        temp.push_back('(');
        generate_paranthesis(ans, temp, n, left+1, right);
        temp.pop_back();
    }

    // ab right paranthesis add hoga
    if(right < left){
        temp.push_back(')');
        generate_paranthesis(ans, temp, n, left, right+1);
        temp.pop_back();
    }
}


int main(){
    int n = 3;
    int left = 0;
    int right = 0; 

    vector<string> ans;
    string temp;

    generate_paranthesis(ans, temp, n, left, right);

    // ab generated paranthesis ko print karo
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<< ans[i][j];
        }
        cout<<endl;
    }

    return 0;
}


/*

Output :-

((()))
(()())
(())()
()(())
()()()


*/