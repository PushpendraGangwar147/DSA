// getter and setter function :-

#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;
    string girlfriend;

    public:
    // Setter :-
    void setDetails(string n, int a){
        name = n;
        age = a;
    }
    void setGF(string gf){
        girlfriend = gf;
    }

    // Getter :-
    void getDetails(){
        cout<< name<<" ";
        cout<< age<<endl;
    }
    string getGF(int pin){
        if(pin==12345) return girlfriend;
        return "";
    }

};

int main(){
    Student s1;
    s1.setDetails("Pawan", 20);
    s1.getDetails();                      // Pushpendra 20

    s1.setGF("Rinki");
    cout<< s1.getGF(12345);               // Rinki

    
    return 0;
}