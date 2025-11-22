// Destructor :-

#include<iostream>
using namespace std;

class Customer{
    public:
    string name;
    int *data;

    // Constructor
    Customer(){
        cout<<"Constructor called"<<endl;
        name = "Pushpendra";
        data = new int;
        *data = 53;
    }

    // Destructor
    ~Customer(){
        delete data;
        cout<<"Destructor called"<<endl;
    }
};

int main(){
    Customer c1;     // Constructor called 
                     // Destructor called
    return 0;
}


/*

DESTRUCTOR :- dynamic memeory allocate ki hai, constructor banana jruri hai otherwise baki ke liye 
default constructor hi kaafi hai

*/