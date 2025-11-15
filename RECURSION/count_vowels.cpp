// Count Vowels using Recursion :-

#include<iostream>
#include<string>
using namespace std;

int countVowels(string s, int start, int end, int &vowels){
    if(start > end) return 0;           // base case

    if(s[start]=='a' || s[start]=='e' || s[start]=='i' || s[start]=='o' || s[start]=='u'){
        vowels++;
    }
    return countVowels(s, start+1, end, vowels);
}


int main(){
    string s = "rohit";
    int vowels = 0;

    int start = 0;
    int end = s.size()-1;

    countVowels(s, start, end, vowels);

    cout<< "Vowels : "<< vowels;

    return 0;
}