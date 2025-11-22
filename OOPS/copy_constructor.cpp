// Copy Constructor 

#include<iostream>
using namespace std;

class Customer {
    public :
    string name;
    int acc_no;
    int balance;

    // Parameterized Constructor
    Customer(string n, int a, int b){
        name = n;
        acc_no = a;
        balance = b;
    }

    // Copy Constructor 
    Customer(const Customer &c){       // "const" ans "&" use krna jruri hai
        cout<<"Copy Constructor called" <<endl;
        name = c.name;
        acc_no = c.acc_no;
        balance = c.balance;
    }

    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<endl;
    }
};

int main(){
    Customer c1("Pushpendra", 101, 5000);

    // Copy Constructor 
    Customer c2(c1);               // Customer c2 = c1       (dono likh skte hain)
    c2.display();

    return 0;
}

/*

Output :-

Copy Constructor called
Pushpendra 101 5000

*/


/*
Agar aap copy constructor define nahi karte, tab bhi code chal jaata hai 
kyunki C++ compiler apna khud ka copy constructor automatically generate kar deta hai.
*/

