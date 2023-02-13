#include <iostream>

using namespace std;

// create class
class Pointer{
    // create private member
    int x,y;
    // create static variable
    static int total_point;

    // create public member
    public : 
        Pointer(int _x = 0,int _y = 0);
        ~Pointer(void);
        void print_total_point(void);
        void set_pointer(int,int);
        void print(void);
        
};

// define static member
int Pointer::total_point = 0;

// define constructor
Pointer::Pointer(int _x,int _y){
    Pointer::x = _x;
    Pointer::y = _y;
    Pointer::total_point++;
}

// define destructor
Pointer::~Pointer(){
    Pointer::total_point--;
}

void Pointer::print_total_point(void){
    cout << "Total Point : " << total_point << endl;
}

void Pointer::set_pointer(int _x,int _y){
    Pointer::x = _x;
    Pointer::y = _y;
}

void Pointer::print(void){
    cout << ">>> Detail <<<" << endl;
    cout << "X : " << x << endl;
    cout << "Y : " << y << endl;
}

int main(void){
    // create 5 pointer
    Pointer p_one,p_two,p_three,p_four,p_five;

    p_one.print_total_point();
}