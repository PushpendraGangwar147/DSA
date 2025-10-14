// RECURSION INTRODUCTION :-

#include<iostream>
using namespace std;

// Recursive Function of Happy Birthday
void fun1(int n){
    if(n == 0){   // base condition
        cout<<"Happy Birthday ";
        return;
    }
    cout<< n <<"days left for birthday" <<endl;
    fun1(n-1);
}

// Recursive Function of "print n to 1"
void fun2(int n){
    if(n==0) return ;
    cout<< n <<" ";
    fun2(n-1);
}

// Recursive function of "print n to 0 even numbers"
void fun3(int n){
    if(n==2){
        cout<<"2";
        return;
    }
    cout<< n <<" ";
    fun3(n-2);
}


int main(){
    
    // happy birthday code 
    int n;
    cout<<"How many days left for birthday : ";
    cin >> n;
    fun1(n);

    cout<< endl;

    // print "N" to 1
    int N = 8;
    fun2(N);                       // 8 7 6 5 4 3 2 1

    cout<< endl;

    // print "num to 0 even numbers"
    int num = 10;
    fun3(num);                    // 10 8 6 4 2

    return 0;
}
