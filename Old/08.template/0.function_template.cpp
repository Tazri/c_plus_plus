#include <iostream>

using namespace std;

// create function template prototype
template <class Data_Type>
Data_Type add(Data_Type,Data_Type);

// function template defination
template <class Data_Type>
Data_Type add(Data_Type _num_one,Data_Type _num_two){
    return _num_one + _num_two;
}

int main(void){
    cout << "add(3,2) : " << add(3,2) << endl;
    cout << "add(3.23,2.453) : " << add(3.23,2.453) << endl;
    return 0;
}