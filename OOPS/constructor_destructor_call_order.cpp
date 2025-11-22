// Constructor and Destructor Call Order :-

#include<iostream>
using namespace std;

class Customer{
    public :
    string name;
    int *data;

    public :
    Customer(){
        name = "4";
        cout<<"Constructor is : "<<name <<endl;
    }

    Customer(string name){
        this->name = name;
        cout<<"Constructor is : "<<name <<endl;
    }

    ~Customer(){
        cout<<"Destructor is :  "<<name <<endl;
    }

};

int main(){
    Customer A1("1"), A2("2"), A3("3");

    Customer *A4 = new Customer();      // jab tak manually delete nhi kroge iske liye destructor call nhi hoga
    delete A4;                          // ab destructor call hoga

    return 0;
}



/*
👉 Order of Construtor :-   jis order me object creater hote hain usi order me constructor call hote hain
Constructor is : 1
Constructor is : 2
Constructor is : 3
Constructor is : 4
Destructor is :  4

👉 Order of Destructor :-   destructor always reverse order me call hote hain (stack)
Destructor is :  4
Destructor is :  3
Destructor is :  2
Destructor is :  1
*/