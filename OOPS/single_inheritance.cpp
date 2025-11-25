// Single Inheritance :-

#include<iostream>
using namespace std;

class Human{
    protected:
    string name;
    int age;

    public:
    Human(string name, int age){
        this->name = name;
        this->age = age;
    }

    void display(){
        cout<<name<<" "<<age<<endl;
    }

    void work(){
        cout<<"I am playing\n";
    }
};

class Student: public Human{
    int roll_no, fees;
    
    public:
    Student(string name, int age, int roll_no, int fees) : Human(name, age)   // parent constructor called
    {
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<roll_no<<" "<<fees<<endl;
    }

};

int main(){
    Student A1("Pushpendra", 20, 192, 15750);  // pahle parent(Huaman) constructor call hoga then child(Student)

    A1.work();          // I am playing
    A1.display();       // Pushpendra 20 192 15750   (child class apne "display" fun ko priority degi)
 

    return 0;
}




/*

 Student(string name, int age, int roll_no, int fees) : Human(name, age)  
 is tarah se child class me se hi parent class ke constructor ko call kiya ja skta h

*/