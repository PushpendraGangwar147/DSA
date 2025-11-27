// Memory bad Allocation 

#include<iostream>
using namespace std;

int main(){
    try {
        size_t n = 500000000;                              // 0.5 billion (2GB approx)
        int *p = new int[n];                                // now runtime check hoga
        cout<< "Memory allocation successful"<<endl;
        delete[] p;
    }
    catch(const exception &e){
        cout<<"Exception Occurred : "<< e.what() <<endl;    // Exception Occurred : std::bad_alloc
    }

    return 0;
}


/*
👉 bad_alloc : size valid hota hai, par memory nahi milti (memory overflow).
    new int[500000000]            (Size theek hai, par memory 2GB nahi mil rahi → bad_alloc)

👉 bad_array_new_length : size hi invalid hota hai (bahut bada / limit se upar).
    new int[1000000000000000]     (Itna bada size C++ allow hi nahi karta → bad_array_new_length)

*/
