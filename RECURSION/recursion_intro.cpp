// RECURSION Introdunction :-

#include<iostream>
using namespace std;

// Recursive Function 
void fun(int n){
    if(n == 0){   // base condition
        cout<<"Happy Birthday ";
        return;
    }
    cout<< n <<"days left for birthday" <<endl;
    fun(n-1);
}

int main(){
    int n;
    cout<<"How many days left for birthday : ";
    cin >> n;
    fun(n);

    return 0;
}
