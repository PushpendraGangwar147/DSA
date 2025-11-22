// Constructor :-    (1) Default    (2) Parameterized    (3)   Copy 

// Dafault Constructor 

#include<iostream>
using namespace std;

class Customer{
    public :
    string name;
    int acc_no;
    int balance;

    // Default Constructor    - no arguments accept
    Customer(){
        cout<<"Deafult Constructor called" <<endl;
        this->name = "Pushpendra";
        this->acc_no = 12345;
        this->balance = 7500;

    }

    // Parameterized Constructor 1  - arguments are accepted
    Customer(string name, int acc_no, int balance){
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
    }

    // Parameterized Constructor 2
    Customer(string name, int acc_no){
        this->name = name;
        this->acc_no = acc_no;
    }

    void display(){
        cout<<name <<" "<<acc_no<<" "<<balance<<endl;
    }
};

int main(){
    Customer c1;                       // Deafult Constructor called
    c1.display();                      // Pushpendra 12345 7500   (by default value le leta hai sabhi object me)

    Customer c2("Sapna", 55, 39);      // Parameterized Constructor-1 call hoga
    c2.display();                      // Sapna 55 39

    Customer c3("Shyam", 69);          // Parameterized Constructor-2 call hoga
    c3.display();                      // Shyam 69 2008007452   (balance garbage value le liya)

    return 0;
}



/*

👉 “Ek time pe ek hi constructor call hota hai.”
👉 hum jo bhi object create krte hain, "this" pointer uska address store kr leta hai

👉 CONSTRUCTOR OVERLOADING :- jab function ke name to same ho but arguments different ho


*/


