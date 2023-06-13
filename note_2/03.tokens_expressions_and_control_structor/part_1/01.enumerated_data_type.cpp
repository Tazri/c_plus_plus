#include <iostream>

using namespace std;

// create enum
enum color {red,green,blue,black};

// create enum with integer value explacitly
enum letter{a,b,c,d=1,e,f};

// anonymous enum
enum {on=1,off=0};

int main(void){
    // creating
    enum letter name_start = e;

    color my_book = blue; // did not necessary to use enum keyword in c++
    
    int is_down = off;

    // error in c++, dose not store in type data without casting to enum type variable
    // color mouse_color = 3;  

    // castin is necessary
    color mouse_color = (color) 30; 

    cout << "name_start : " << name_start << endl; // name_start : 2
    cout << "my_book : " << my_book << endl; // my_book : 2
    cout << "is_down : " << is_down << endl; // is_down : 0
    cout << "mouse_color : " << mouse_color << endl; // mouse_color : 30

    return 0;
}

/*
Ouptut : 
name_start : 2
my_book : 2
is_down : 0
mouse_color : 30
*/