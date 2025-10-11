// POINTER relationship with ARRAY :-

#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    // arr++;    // error dega kyuki ek bar jo value symbol table me store ho gyi, bo badli nhi ja skti

    int *ptr = arr;      // (Here pointer will contain the address of arr(first element of array))

    // Print the address of first element / 0th index      (4 Methods)
    cout<< "First element address :- "<<endl;
    cout<< arr <<endl;           // 0x61fef8
    cout<< arr+0 <<endl;         // 0x61fef8
    cout<< &arr[0] <<endl;       // 0x61fef8
    cout<< ptr <<endl;           // 0x61fef8

    // Print the address of second element / 1st index
    cout<< "Second element address :- "<<endl;
    cout<< arr+1 <<endl;         // 0x61fefc     (phle element ke address(0x61fef8) me +4 krne pe 0x61fefc aayega)
    cout<< &arr[1] <<endl;       // 0x61fefc

    // Print the value of 0th index 
    cout<< "Value of 0th index :- "<<endl;
    cout<< arr[0] <<endl;        // 10
    cout<< *arr <<endl;          // 10
    cout<< *(arr+0) <<endl;      // 10
    cout<< *ptr <<endl;          // 10

    // PRINT all the adresses of elements in an Array
    cout<< "All the addresses of elements in an array : ";
    for(int i=0; i<5; i++){
        cout<< (arr+i) <<" ";             // 0x61fef4 0x61fef8 0x61fefc 0x61ff00 0x61ff04
    }
    cout<<endl;

    // Print all the elements of an Array :-
    cout<<"All the elements of an Array :- ";
    for(int i=0; i<5; i++){
        cout<< arr[i] <<" ";              // 10 20 30 40 50
    }
    cout<<endl;
    for(int i=0; i<5; i++){
        cout<< *(arr+i)<< " ";            // 10 20 30 40 50
    }

    // Print all the elements of an Array with the help of Pointer :-
    cout<<"\nAll the elements of an  Array with Pointer :- "<<endl;
    for(int i=0; i<5; i++){
        cout<< ptr[i] <<" ";               // 10 20 30 40 50
    }

    // Arithmetic operation on Pointer :- (ptr++, ptr--, ptr = ptr + i)
    cout<<"\nArithmetic operation performed on pointer "<<endl;
    for(int i=0; i<5; i++){
        cout<< *ptr <<" ";               // 10 20 30 40 50
        ptr++;
    }


return 0;
}