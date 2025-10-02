// 2-D Vector Introduction :-

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // Vector Creation :-
    vector<vector<int>> v;
            // OR
    vector<vector<int>> matrix(3, vector<int>(4,5));    // 3 rows, 4 columns, sabki value 5 se initalized

    // Print the 2-D Vector (Matrix) :-
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){                   // 5 5 5 5
            cout<<matrix[i][j]<<" ";              // 5 5 5 5
        }                                         // 5 5 5 5
        cout<<endl;
    }

    // Find no. of Rows and Columns :-
    cout<<"No of Rows : "<<matrix.size()<<endl;          // No of Rows : 3
    cout<<"No of Columns : "<<matrix[0].size()<<endl;    // No of Columns : 4




    return 0;
}