// Hybrid Inheritance  =  (Hierarchical + Multiple) Inheritance
 
#include<iostream>
using namespace std;

// Student class
class Student{
    public : 
    void print_student(){
        cout<<"I am Student"<<endl;
    }
};

// Male class
class Male{
    public:
    void print_male(){
        cout<<"I am Male"<<endl;
    }
};

// Female class
class Female{
    public:
    void print_female(){
        cout<<"I am Female"<<endl;
    }
};

// Boy class
class Boy : public Student, public Male{
    public:
    void print_boy(){
        cout<<"I am Boy"<<endl;
    }
};

// Girl class
class Girl : public Student, public Female{
    public:
    void print_girl(){
        cout<<"I am Girl"<<endl;
    }
};


int main(){
    Boy b1;
    b1.print_boy();          // I am Boy
    b1.print_student();      // I am Student
    b1.print_male();         // I am Male

    Girl g1;
    g1.print_girl();         // I am Girl
    g1.print_student();      // I am Student
    g1.print_female();       // I am Female

    return 0;
}


