// Operator Overloading using friend function :-

#include<iostream>
using namespace std;

class Complex{
    int real, img;

    public:
    // Constructors
    Complex(){}
    Complex(int r, int i){
        real = r;
        img  = i;
    }

    // Friend Function for + Operator
    friend Complex operator + (Complex &A, Complex &B);

    void display(){
        cout << real << " + " << img << "i" << endl;
    }
};

// Friend function definition
Complex operator + (Complex &A, Complex &B){
    Complex temp;                              // blank object
    temp.real = A.real + B.real;               // private members accessed → allowed
    temp.img  = A.img  + B.img;
    return temp;
}

int main(){
    Complex c1(3,2);
    Complex c2(4,6);

    Complex c3 = c1 + c2;   // friend operator +
    c3.display();           // Output: 7 + 8i

    return 0;
}
