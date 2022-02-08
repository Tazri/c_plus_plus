#include <iostream>

using namespace std;

// create base class
class Base{
    public : 
        virtual void Message(void){
            cout << "Virtual : It's Base class" << endl;
        }

        void non_virtual_message(void){
            cout << "non virtual : It's Base class" << endl;
        }
};

class Derived:public Base{
    public : 
    void Message(void){
        cout << "It'Derived Class" << endl;
    }

    void non_virtual_message(void){
            cout << "non virtual : It's derived class" << endl;
        }
};


int main(void){
    // create base
    Base *base_pointer;

    Derived derived;

    base_pointer = &derived;

    cout << "Derived.Message() : " << endl;
    derived.Message();
    cout << "Derived.non_virtual_message() : " << endl;
    derived.non_virtual_message();

    cout <<"\nbase_pinter point derived class" << endl;
    cout << "Now base_pointer->Message() : " << endl;
    base_pointer->Message();
    cout << "base_pointer->non_virtual_message() : " << endl;
    base_pointer->non_virtual_message();

    return 0;
}