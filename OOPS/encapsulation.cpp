// Encapsulation 

#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_no, balance;

    public :
    Customer(string n, int acc, int b){
        name = n;
        acc_no = acc;
        balance = b;
    }

    void deposit(int amount){
        if(amount > 0){
            balance += amount;
        }
        else cout<<"Enter valid amount"<<endl;
    }

    void withdraw(int amount){
        if(balance >= amount && amount > 0){
            balance -= amount;
        }
        else if( balance < amount)   cout<<"Insufficient balance"<<endl;
        else cout<<"Invalid amount"<<endl;
    }

    void display(){
        cout<<"Name : "<<name<<" "<<"Acc No : "<<acc_no<<" "<<"Balance : "<<balance<<endl;
    }
};


int main(){
    Customer c1("Pushpendra", 1, 1000);
    Customer c2("Priyanka", 2, 1800);
    Customer c3("Sapna", 3, 2000);

    c1.deposit(-200);               // Enter valid amount       (kyuki -ve balance nhi deposit kr skte)
    c2.withdraw(160000);            // Insufficient balance     (kyuki account me itne paise nhi h)

    c1.deposit(500);                // ye aaram se deposit ho jayega
    c1.display();                   // Name : Pushpendra Acc No : 1 Balance : 1500

    c3.withdraw(200);               // aaram se itne paise nikal jayenge
    c3.display();                   // Name : Sapna Acc No : 3 Balance : 1800


    return 0;
}