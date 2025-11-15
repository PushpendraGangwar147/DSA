// Convert string lower case to upper case :-

#include <iostream>
#include<string>
using namespace std;

void lower_to_upper(string &str, int i){
    if(i == -1) return;
    // yadi char lowerCase me hai to usko upper case me convert kro
    if(str[i] >='a' && str[i] <='z'){
        str[i] = toupper(str[i]);          // toupper(str[i]) bas convert krta h isko str[i] me store nhi kroge to
    }                                      // str[i] nhi badlega

    lower_to_upper(str, i-1);
}

int main(){
    string str = "Pushpendra";             // PUSHPENDRA
    int last_index = str.size()-1;

    lower_to_upper(str, last_index);
    cout<< str;

    return 0;
}