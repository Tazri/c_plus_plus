#include <iostream>

using namespace std;

// create class
class Base{
    public : 
    virtual ~Base(void){
            cout << "This is base destructor. virtual." << endl;
        }
};

class Derived:public Base{
    public : 
        ~Derived(void){
            cout << "This is derived destructor." << endl;
        }
};

int main(void){
    Base *base_pointer;
    base_pointer = new Derived;
    // finish the function and see which destructo first called
    delete base_pointer;
    return 0;
}