// Virtual Function :-    (Runtime Polymorphism) / Function overriding

#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void speak(){
        cout<<"HuHu"<<endl;
    }
};

class Dog : public Animal{
    public:
    void speak(){    // exact same function upar wale ki trh, parameters bhi same hone chahiye
        cout<<"barking"<<endl;
    }
};

int main(){
    Animal *d1;
    d1 = new Dog();
    d1->speak();

    return 0;
}



/*
👉 Agar Animal class ke function ke aage "virtual" nahi lagate,
   to compiler compile-time pe hi decide kar deta hai ki pointer ka type (Animal*) dekh kar
   Animal ka speak() chalega.

👉 Isko static binding / early binding bolte hain.

👉 Lekin hum chahte hain ki actual object (Dog) ka function chale,
   jiska decision runtime pe hota hai.

👉 Isliye "virtual" keyword lagate hi function late binding / runtime binding ke through
   override hone lagta hai.

👉 D1 = new Dog() me pointer Animal ka hai, but object Dog ka —
   isliye virtual ki wajah se Dog::speak() call hota hai.
*/