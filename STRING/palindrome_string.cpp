// String is palindrome or not :-

#include<iostream>
using namespace std;

int main(){
    string str = "naman";

    int start = 0, end = str.size()-1;
    while(start<end){
        if(str[start] != str[end]) {
            cout<< "String is not palindrome";
            return 0;
        }
        start++;
        end--;
    }

    cout<<"String is palindrome";                // String is palindrome

    return 0;
}