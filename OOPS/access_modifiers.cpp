// Access Modifiers :-  (1) public   (2) protected   (3) private

#include<iostream>
using namespace std;

class Parent {
private:       
    int a;          // Only Parent class          can access

protected:
    int b;          // Parent + Child class       can access

public:
    int c;          // Parent + Child + main()    can access

    void function() {
        a = 10;
        b = 20;
        c = 30;
    }
};

class Child : public Parent {
public:
    void setValues() {
        // a = 50;         // ❌ private → NOT accessible
        b = 25;            // ✔ protected → accessible
        c = 5;             // ✔ public → accessible
    }
};

int main() {
    Parent p1;
    // p1.a = 1;          // ❌ private
    // p1.b = 2;          // ❌ protected
    p1.c = 3;             // ✔ public

    Child ch;
    ch.setValues();       // ✔ calling child function

    return 0;
}
