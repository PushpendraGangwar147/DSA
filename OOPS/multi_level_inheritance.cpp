// Multi level inheritance

#include<iostream>
using namespace std;

class Person{
    protected:
    string name;

    public:
    void introduce(){
        cout<<"My name is : "<<name<<endl;
    }
};

class Employee : public Person{
    protected:
    int salary;

    public :
    void monthly_salary(){
        cout<<"My salary is : "<<salary<<endl;
    }
};

class Manager : public Employee{
    public :
    string department;
    
    // Constructor
    Manager(string name, int salary, string department) {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }

    void display(){
        cout<<name<<" "<<salary<<" "<<department<<endl;
    }

    void work(){
        cout<<"I am leading the department"<<endl;
    }
};

int main(){
    Manager m1("Pushpendra", 2500, "HR");
    m1.introduce();          // My name is : Pushpendra
    m1.monthly_salary();     // My salary is : 2500
    m1.work();               // I am leading the department

    m1.display();            // Pushpendra 2500 HR
    
    return 0;
}