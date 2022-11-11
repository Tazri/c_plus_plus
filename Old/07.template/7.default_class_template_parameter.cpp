#include <iostream>

using namespace std;

// create template class with default argument
template <class type = int,int _size = 5,int _intial_value = 0>
class Array{
    type array[_size];
    int len = _size;
    type intial_value = (type) _intial_value;

    public :
        // constructor
        Array(void);

        // show_value 
        void show_value(void);
};

// Point destructor
template <class type,int _size,int _intial_value>
Array<type,_size,_intial_value>::Array(void){
    // set intial value of array
    int i = 0;
    for(i = 0;i < _size;i++){
        array[i] = intial_value;
    }
}



// show_value
template <class type,int _size,int _intial_value>
void Array<type,_size,_intial_value>::show_value(void){
    // show the value like array
    cout << "[";

    int i;
    for(i = 0; i < _size-1;i++){
        cout << array[i] << ",";
    }
    cout << array[i] << "]" << endl;
}

int main(void){
    // create array
    Array <> array_one;

    cout << "array_one.show_value() : " << endl;
    array_one.show_value();

    Array <double,3,1> array_two;
    cout <<"\narray_two.show_value() : " << endl;
    array_two.show_value();

    Array <int,10,6> array_three;
    cout << "\narray_three.show_value() : " << endl;
    array_three.show_value();

    return 0;
}