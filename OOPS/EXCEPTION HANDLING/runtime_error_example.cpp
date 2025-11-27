// std:runtime_error 

#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_no, balance;

    public :
    // constructor 
    Customer(string name, int acc_no, int balance){
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
    }

    // deposit
    void deposit(int amount){
        if(amount > 0){
            balance += amount;
            cout<< amount<<" rs. credited successfully"<<endl;
        }
        else{
            throw runtime_error ("amount should be greater than 0");
        }
    }

    // withdraw
    void withdraw(int amount){
        if(amount <= balance && amount > 0){
            balance -= amount;
            cout<< amount <<" rs. debited succefully"<<endl;
        }
        else if(amount < 0){
            throw runtime_error ("amount should be greater than 0");
        }
        else{
            throw runtime_error ("insufficient balance");
        }
    }

};

int main(){
    Customer c1("Pushpendra", 2, 8500);
    try{
        c1.deposit(-100);
        c1.withdraw(100000);
    }
    catch(const runtime_error &e){
        cout<<"Exception occured : "<< e.what() <<endl;     // Exception occured : amount should be greater than 0
    }
    

    return 0;
}

/*
👉 “runtime_error ek class hai; throw is class ka object create karta hai, aur catch block object ko 
    const reference ke through receive karta hai.”
*/