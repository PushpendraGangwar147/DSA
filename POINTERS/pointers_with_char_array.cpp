// Pointers with char Array :-

#include<iostream>
using namespace std;

int main()
{
    char arr[5] = "1234";
    cout<< arr <<endl;                          // 1234

    char*ptr1 = arr;
    cout<< ptr1 <<endl;                         // 1234

    // Print the address fo char array
    cout<< (void*) arr <<endl;                  // 0x61ff07
    cout<< (void*) ptr1 <<endl;                 // 0x61ff07
    cout<< static_cast<void*>(arr) <<endl;      // 0x61ff03


    char name = 'a';
    char* ptr2 = &name;
    cout<< ptr2 <<endl;      // a1234  (randome value print ho rhi hai, address print krwane ke liye type casting jaruri hai)
    cout<< (void*) ptr2 <<endl;                // 0x61ff02


    /*
    Note :-   (void*) ye pointer kisi location ko indicate krta hai lekin ye nhi btata ki us location par stored
               data ka datatype kya hai
    */


    return 0;
}