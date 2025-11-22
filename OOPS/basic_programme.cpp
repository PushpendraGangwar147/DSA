// OOPS Basic Programme :-

#include<iostream>
using namespace std;

class Student{
    public :                    // by default private
    string name, grade;
    int age, roll_no;
};

int main(){
    Student s1;
    s1.name = "Pushpendra";
    s1.age = 20;
    s1.grade = "A+";
    s1.roll_no = 192;
    cout<< s1.name<<endl;         // Pushpendra

    Student s2;
    s2.name = "Rinki";
    s2.age = 16;
    s2.grade = "B+";
    s2.roll_no = 153;
    cout<< s2.name<<endl;         // Rinki

    return 0;
}