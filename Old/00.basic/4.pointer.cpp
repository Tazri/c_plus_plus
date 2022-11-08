#include <iostream>

using namespace std;

int main(void){
    int *pointer;
    int number;

    number = 20;
    pointer = &number;
    cout << "number = " << number << endl;
    cout << "&number = " << &number << endl;
    
    cout << "pointer = " << pointer << endl;
    cout << "*pointer = " << *pointer << endl;
    return 0;
}