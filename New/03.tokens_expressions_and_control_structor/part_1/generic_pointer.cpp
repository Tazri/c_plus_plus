#include<iostream>

using namespace std;

int main(void){
    void *generic_pointer;
    int number = 30;
    int *number_pointer = &number;
    int *np;

    // store number_pointer into generic_pointer
    generic_pointer = number_pointer;

    // store generic_pointer into np pointer.
    // np = generic_pointer; // it allow only c
    np = (int *) generic_pointer; // in c++ rule.

    // berofe access the generic_pointer must be convert it explicit
    cout <<"*number_pointer : " << *number_pointer << endl;
    cout << "*generic_pointer :" <<   *(int *)generic_pointer << endl;
    cout << "*np :" << *np <<endl;

    cout << endl << "> Printing Address <" << endl;
    cout << "&number : " << &number << endl;
    cout << "number_pointer : " << number_pointer << endl;
    cout << "np : " << np << endl;
    cout << "generic_pointer : " << generic_pointer << endl;
    return 0;
}