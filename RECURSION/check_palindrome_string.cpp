// Check string is palindrome or not :-

#include<iostream>
#include<string>
using namespace std;

bool check_palindrome(string str, int start, int end){
    if(start >= end) return 1;                      // base case
    if(str[start] != str[end]) return 0;            // string does not matched

    return check_palindrome(str, start+1, end-1);
}

int main()
{
    // example - 1
    string str1 = "naman";
    int n1 = str1.size();

    if(check_palindrome(str1, 0, n1-1))     cout<< str1 <<" is palindrome";      // String is Palindrome
    else cout<< str1<< " is not plaindrome";
    cout<< endl;

    // example - 2
    string str2 = "namon";
    int n2 = str2.size();

    if(check_palindrome(str2, 0, n2-1))  cout<< str2 <<" is palindrome";
    else cout<< str2 <<" is not palindrome";                                     // namon is not palindrome


    return 0;
}