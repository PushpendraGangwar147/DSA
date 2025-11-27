// User defined exception :-

#include<iostream>
using namespace std;

// User defined Exception class (InvalidAmountError)
class InvalidAmountError : public runtime_error{
    public :
    // User defined class constructor
    InvalidAmountError(const string &msg) : runtime_error(msg){

    }
};

// User defined Exception class (InsufficientBalanceError)
class InsufficientBalanceError : public runtime_error{
    public :
    // constructor
    InsufficientBalanceError(const string &msg) : runtime_error(msg){

    }
};

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
            throw InvalidAmountError ("amount should be greater than 0");
        }
    }

    // withdraw
    void withdraw(int amount){
        if(amount <= balance && amount > 0){
            balance -= amount;
            cout<< amount <<" rs. debited succefully"<<endl;
        }
        else if(amount < 0){
            throw InvalidAmountError ("amount should be greater than 0");
        }
        else{
            throw InsufficientBalanceError ("insufficient balance");
        }
    }

};

int main(){
    Customer c1("Pushpendra", 2, 8500);
    try{
        c1.deposit(100);                                   // Exception occured : amount should be greater than 0
        c1.withdraw(10000000);
    }
    catch(const InvalidAmountError &e){
        cout<<"Exception occured : "<< e.what() <<endl;    
    }
    catch(const InsufficientBalanceError &e){
        cout<<"Exception occurred : "<< e.what() <<endl;   // Exception occurred : insufficient balance
    }
    

    return 0;
}

/*
👉 InvalidAmountError Class & InsufficientBalanceError Class :- Ye classes runtime_error se inherit karti hain.
    Message .what() se print hota hai.

👉 KAISE KAAM HOTA HAI :- 
    throw InvalidAmountError("message") →   InvalidAmountError ka object banta hai → catch block me jump hota h.
    throw InsufficientBalanceError("message") →   InsufficientBalanceError ka object throw hota hai.

👉 CATCH BLOCKS :-
    catch(const InvalidAmountError &e) → sirf invalid amount wali error pakadta hai.
    catch(const InsufficientBalanceError &e) → balance related error pakadta hai.
*/