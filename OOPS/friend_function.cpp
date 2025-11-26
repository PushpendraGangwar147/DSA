// Friend Function :-

// Ex : show the value of x using friend function

#include<iostream>
using namespace std;

class A{
    int x;

    public :
    // constructor
    A(int a){
        x = a;
    }

    // friend function declaration
    friend void show(A &a1);             // friend returntype function_name(className &parameters);
};

// friend function definition
void show(A &a1){
    cout<< a1.x;
}


int main(){
    A a1(5);
    show(a1);    // 5


    return 0;
}



/*
👉 friend function class ke andar sirf declare kiya jata hai , aur class ke bahar define kiya jata hai
👉 ye class ka member nhi hota hai but phir bhi class ke bahar se hi class ke "private aur protrcted" members
    ko access kr leta hai
👉 isme "this" pointer nhi hota hai (constructor me use krne ke liye)
*/