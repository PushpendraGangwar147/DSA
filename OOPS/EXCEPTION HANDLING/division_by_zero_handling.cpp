// Division by zero exception handling 

#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 0;

    try{
        if(b == 0) throw "can't divide by zero";

        int c = a/b;
        cout<< "Addition is : "<< c<<endl;
    }
    
    catch(const char *e){
        cout<<"Exception Occured : "<< e <<endl;     // Exception Occured : can't divide by zero
    }


    return 0;
}