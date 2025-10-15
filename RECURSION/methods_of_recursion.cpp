// How to solve recursion problem from different methods :-
// Problem (Print 1 to  N numbers)

#include<iostream>
using namespace std;

// Method - 1
void print(int n, int num){
    if(n == num){
        cout << num;
        return;
    }
    cout<<num << " ";
    print(n, num+1);
}

// Method - 2
void show_num(int n){
    if(n == 1) {
        cout<< "1"<<" ";
        return;
    }
    show_num(n-1);
    cout<< n <<" ";
}

int main(){
    int n = 10;

    // method - 1 (with 2 arguments)
    print(n, 1);
    cout<< endl;

    // method - 2 (with single argument)
    show_num(n);

    return 0;
}