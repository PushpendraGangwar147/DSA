// Dynamic Memory Allocation :-

#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int age;
    string grade;
};

int main(){
    Student *s = new Student;    // Dynamic Memory Allocation (int *p = new int)  thik aise hi yaha int ki jagah 
    s->name = "Pushpendra";      // Student "user defined datatype" hai
    s->age = 20;
    s->grade = "A";              // "->" operator ki jagah "(*s)." [dot operator]  bhi use kr skte hain 

    cout<< s->name <<endl;     
    cout<< s->age <<endl;
    cout<< s->grade <<endl;

    return 0;
}