// String Introduction (Part 2) :-

#include<iostream>
#include<string>
using namespace std;

int main(){
    // user se puri line input lena :-  getline(cin, s)
    string s;
    getline(cin, s);                          // I/P : I am Pushpednra Gangwar
    cout << s << endl;;                       // O/P : I am Pushpendra Gangwar

    // size of string :-
    string str = "Pushpendra";
    cout<< str.size()<<endl;                  // 10

    // Union of 2 Strings (Method 1):-       Yha + operator ek new string bnata hai, str1, str2 unchanged rhte h
    string str1 = "Pushpendra ";
    string str2 = "Gangwar";
    string str3 = str1 + str2;
    cout<<str3<<endl;                        // Pushpendra Gangwar

    // Union of 2 Strings (Method 2):-    Yha append() function existing string str1 ko modify karta hai. str1 ke end me str2 ko add kar deta hai.
    cout<< str1.append(str2) <<endl;        // Pushpendra Gangwar
    
    // str.push_back() :-                String ke end me ek single character add karta hai.
    string s1 = "Pushpendra";
    s1.push_back('G');                  // ya aise kar do    (s1 = s1 + 'G') or (s1 = s1 + "G")
    cout<< s1 <<endl;                             // PushpendraG

    // str.pop_back()  :-                String ke last character ko remove (delete) karta hai.
    s1.pop_back();
    cout<< s1 <<endl;                      // Pushpendra

    // Escape character (\) :-      ye string me directly likhne se print nahi hote, balki special meaning dete hain (jaise newline, tab, double quote, etc).
    cout << "Hello\nWorld" <<endl;        // \n = newline character → next line me output print karega.
    cout << "He said \"Hello\"" << endl;   // He said "Hello"

    // Null char (\0) print karana :-
    cout << "\\0";                      // \0


    return 0;
}