#include <iostream>

using namespace std;

// create class
class Base{
    public : 
        void message(void){
            cout << "This is message from base" << endl;
        }
};

class Derived:public Base{
    public : 
        void message(void){
            cout << "This is messgae from derived" << endl;
        }
};

int main(void){
    Base *base_pointer;
    Derived derived_object;
    // here message member function override by base member function
    base_pointer = &derived_object;
    
    cout << "base_pointer store derived object now " << endl;
    cout << "see which member function base pointer called : " << endl;
    base_pointer->message();
    return 0;
}