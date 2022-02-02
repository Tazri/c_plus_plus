#include <iostream>

using namespace std;

// funciton for new handler
void _momory_error(void){
    cout << "Failed to allocate memory.!!" << endl;
    exit(1);
}

int main(void){
    set_new_handler(_momory_error);

    // try to huge amount of size memory allocation
    int *ptr = new int[5000000000];

    *ptr = 50;
    cout << "first element is " << *ptr << endl;
    delete [] ptr;

    // unset _new_handler
    set_new_handler(0);

    return 0;
}