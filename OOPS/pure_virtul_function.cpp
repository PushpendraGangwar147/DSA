// Pure Virtual Function / Abstract class

#include<iostream>
using namespace std;

class Animal{
public:
    virtual void sound() = 0;   // pure virtual function → class becomes abstract
};

class Dog : public Animal{
public:
    void sound(){
        cout << "barking";
    }
};

int main(){
    Animal *a = new Dog();  
    a->sound();              // Output: barking

    return 0;
}



/*
👉 Pure Virtual Function :-  Woh function jiska sirf declaration hota hai, definition nahi hoti,
    aur jisme = 0 likha hota hai.
    ✔ Ye compulsory banata hai ki derived class is function ko override kare.
    ✔ Iska koi body nahi hota.

👉 Abstract Class :-    Woh class jisme minimum 1 pure virtual function ho, use Abstract Class kehte hain.
    ✔ Abstract class ka object nahi bana sakte
    ✔ Sirf pointer/reference bana sakte
    ✔ Incomplete class hoti hai
    ✔ Abstract class ka khud ka object nahi ban sakta: Animal a; ❌ ERROR
    Pure virtual function likhne se class “abstract” ban jaati hai.
*/
