/* sizeof(class) :- class ka koi size nhi hota hai, but phir bhi compiler sizeof(class) print krta hai, actual me
                    ye object ka size hota hai, class me jo members (variables) defined hote hain unka size hota h
*/

#include<iostream>
using namespace std;

class A{
    int x;    // 4 bytes
    char y;   // 1 byte  
};

int main(){
    A obj;
    cout<< sizeof(A)<< endl;    //  8  (5 bytes int aur char ka  +  3 bytes padding ka)
    return 0;
}



/* 

“Padding tabhi hoti hai jab class me different data types ho aur unki alignment requirement different ho.
Same type ke variables ke beech padding nahi hoti.”

*/