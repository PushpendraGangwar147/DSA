// Exception Handling :-      (try, catch, thorow)

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
            throw "amount should be greater than 0";
        }
    }

    // withdraw
    void withdraw(int amount){
        if(amount <= balance && amount > 0){
            balance -= amount;
            cout<< amount <<" rs. debited succefully"<<endl;
        }
        else if(amount < 0){
            throw "amount should be greater than 0";
        }
        else{
            throw "insufficient balance";
        }
    }

};

int main(){
    Customer c1("Pushpendra", 2, 8500);
    try{
        c1.deposit(-100);
        c1.withdraw(100000);
    }
    catch(const char *e){
        cout<<"Exception occured : "<< e <<endl;     // Exception occured : amount should be greater than 0
    }
    

    return 0;
}


/*
“Jaise hi try block me koi exception throw hota hai, uske baad ki koi bhi line execute nahi hoti. 
Control seedha catch block me transfer ho jata hai.”
*/