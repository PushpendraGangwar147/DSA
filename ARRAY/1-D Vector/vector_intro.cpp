// Vector Introduction (Part 1):-

#include<iostream>
#include <vector>
using namespace std;

int main(){

    // vector declaration :-
    vector<int> v;

    // size and capaccity :-
    cout<<"Size : "<<v.size()<<endl;                  // 0
    cout<<"Capacity : "<<v.capacity()<<endl;          // 0

    // Push and Pop operation :-
    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.pop_back();

    cout<<"New Size : "<<v.size()<<endl;                  // 2
    cout<<"New Capacity : "<<v.capacity()<<endl;          // 4

    // Update value :-
    v[1] = 9;                                             // idx 1 ki value 9 ho jayegi

    // Vector Initialization :-
    vector<int> v1(5,2);
    cout<<"v1 Size : "<<v1.size()<<endl;                  // 5
    cout<<"v1 Capacity : "<<v1.capacity()<<endl;          // 5

    // New Initialization Method :-
    vector<int> v2 = {2,4,5,6};
    cout<<"v2 Size : "<<v2.size()<<endl;                  // 4
    cout<<"v2 Capacity : "<<v2.capacity()<<endl;          // 4

    // kisi index pe present element ko remove krna :-
    v2.erase(v2.begin()+2);                                // v.erase(v.begin()+index)
    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";                                  // 2 4 6  :- idx 2 wala element(5) hat gaya 
    }
    cout<<endl;

    // inserting element at any index :-
    v2.insert(v2.begin()+2, 50);                           // index 2 par 50 insert ho jayegi
    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";                                  // 2 4 50 6
    }
    cout<<endl;

    // updating the element :-
    v2[2] = 100;                                           // index 2 wala element update hokar 100 ho jayega
    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";                                  // 2 4 100 6
    }
    cout<<endl;

    // clear the vector :-
    v2.clear();                                          // vector v2 khali ho gya
    cout<<"v2 Size : "<<v2.size()<<endl;                 // size : 0
    cout<<"v2 Capacity : "<<v2.capacity()<<endl;         // capacity : 4







    return 0;
}