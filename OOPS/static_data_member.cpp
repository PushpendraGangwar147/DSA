// Static Data Member 

#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_no, balance;
    static int total_customer;   // static data member 
    static int total_balance;

    public:
    Customer(string name, int acc_no, int balance){
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
        total_customer++;                // static data member
        total_balance += balance;
    }

    static void access_static(){         // Static member function
        cout<<"total customer : "<< total_customer<<endl;
        cout<< "total balance : "<<total_balance<<endl;
    }

    void display(){
        cout<<name <<" "<< acc_no<<" "<< balance<<" "<< total_customer<<endl;
    }

    void deposit(int amount){
        if(amount > 0){
            balance += amount;
            total_balance += amount;
        }
    }

    void withdraw(int amount){
        if(total_balance >= amount  && amount > 0){
            balance -= amount;
            total_balance -= amount;
        }
    }

    void display_total_customer(){
        cout<< total_customer<<endl;
    }
};

int Customer:: total_customer = 0;  
int Customer:: total_balance = 0;

int main(){
    Customer c1("Pushpendra", 1, 1000);
    c1.display_total_customer();               // 1

    Customer c2("Sandhya", 2, 2500);
    Customer c3("Sawan", 3, 4400);
    c3.display_total_customer();               // 3

    // static member function ko call karo
    Customer:: access_static();                // total customer : 3      total balance : 7900

    // ab account me 100 rs dal diye c1 ne (total_balance = 8k) 
    c1.deposit(100);
    Customer:: access_static();                // total customer : 3       total balance : 8000

    // ab account se 3000 rs nikal liye c2 ne (total_balance = 5k)
    c2.withdraw(3000);
     Customer:: access_static();               // total customer : 3       total balance : 5000

                                                
    return 0;
}

/*
👉 Static function sirf static members ko ho access kr skta hai
👉 static data member :- ye puri class ke liye same rhega (ek hi copy hai iski),mtlb static usi varibale ko 
banayenge jisko hum sabke liye common banana chahte hain
*/