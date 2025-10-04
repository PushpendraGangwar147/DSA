// String Introduction (Part 1) :-

#include<iostream>
using namespace std;

int main(){

    char arr[] = {'A','p','p','l','e'};
    for(int i=0; i<5; i++){
        cout<<arr[i];                      // Apple
    }
    cout<<endl;

    // variable size ka character arr :-
    char Arr[20];
    cin>>Arr;                     // yaha se maximum 19 length ki string input le sakte hain (1 space reserved for \0)
    cout<<Arr;                    // jo bhi string input doge print ho jayegi
    cout << endl;

    // Null character (\0) :-
    char arr1[10];
    cin >> arr1;                    // PUSHPENDRA
    arr1[4] = '\0';                // 4th index par NULL char dal diya, iske baad kuchh bhi print nhi hoga  
    cout << arr1;                 // PUSH (Null char milne ke baad aage kcuh print nhi hua)

    // STRING Declaration :-
    string s = "Gangwar";
    cout<<s<<endl;                         // Gangwar

    // taking user input(string) :-
    string str;
    cin >> str;                            // Bareilly
    cout << str<<endl;                     // Bareilly


    return 0;
}