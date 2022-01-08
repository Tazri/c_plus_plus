#include <iostream>

using namespace std;

int main(void){
    void *ptr_void;
    int *ptr_int;
    int x = 20;
    ptr_void = &x;
    
    // we can not do that in c++
    // ptr_int = ptr_void;

    // instead do that
    ptr_int = (int *) ptr_void;

    cout << "*ptr_int = " << *ptr_int << endl;


    return 0;
}