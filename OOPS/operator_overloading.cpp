// Operator Overloading 

// Ex - Adding Complex Numbers

#include<iostream>
using namespace std;

class Complex{
    int real, img;

    public :
    
    Complex(){     // Default Constructor (zaroori kyunki operator function me blank object bana rahe hain)

    }

    Complex(int real, int img){
        this->real = real;
        this->img = img;
    }

    // Operator Overloading Function for +
    Complex operator + (Complex &C){
        Complex ans;                     // Yaha default constructor call hoga
        ans.real = real + C.real;
        ans.img = img + C.img;
        return ans;
    }

    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

int main(){
    Complex c1(3,2);
    Complex c2(4,6);

    Complex c3 = c1 + c2;       // operator + call
    c3.display();               // 7 + 8i


    return 0;
}