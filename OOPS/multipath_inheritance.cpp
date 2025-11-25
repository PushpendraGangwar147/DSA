// Multipath Inheritance 

// (Diamond Problem) Code :-

#include<iostream>
using namespace std;

class Human{
    public:
    string name;

    void display(){
        cout<<"My name is : "<<name<<endl;
    }
};

class Engineer : public virtual Human {
    public:
    string specialization;

    void work(){
        cout<<"I have specialization in "<<specialization<<endl;
    }
};

class Youtuber : public virtual Human {
    public:
    int subscriber;

    void content_creator(){
        cout<<"I have "<<subscriber<<" subscribers"<<endl;
    }
};

class Codeteacher : public Engineer, public Youtuber{
    public:
    int salary;

    // Constructor
    Codeteacher(){

    }

    Codeteacher(string name, string specialization, int subscriber, int salary){
        this->name = name;
        this->specialization = specialization;
        this->subscriber = subscriber; 
        this->salary = salary;
    }
};


int main(){
    Codeteacher c1("Pushpendra", "C++", 50000, 25000);     
    c1.display();     // My name is : Pushpendra
    

    return 0;
}

/*
👉 Is case me compiler confuse ho jata hai aur "AMBOGUITY ERROR" deta hai, kyuki "name" variable 2 path 
    isliye "virtual" keyword use gya hai
*/