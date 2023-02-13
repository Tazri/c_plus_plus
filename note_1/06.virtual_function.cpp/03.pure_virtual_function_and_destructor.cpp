#include <iostream>

using namespace std;

// create Base class
class Base{
    public : 
        virtual void msg(void) = 0;
        virtual ~Base(void) = 0;
};

Base::~Base(void){
    cout << "this is virtual base destructor." << endl; ;
}

class Derived:public Base{
    public :
        void msg(void);
        ~Derived(void){
            cout << "This is derived destructor." << endl;
        }
};

void Derived::msg(void){
    cout << "This is derived msg" << endl;
}

int main(void){
    // create base ponter and delete it
    Base *base_pointer = new Derived;

    base_pointer->msg();
    delete base_pointer;

    return 0;
}