#include <iostream>

using namespace std;

// creating class

// // Class_A class
// class Class_A{
//     int a,b;
//     public : 
//         Class_A(int _a = 0,int _b = 0);
//         friend class Class_B;
// };

// forward referencing
class Class_B;

// Class_A class
class Class_A{
    int a,b;
    public :
        Class_A(int _a= 0,int _b = 0);
        friend Class_B;
};

// Class_A constructor
Class_A::Class_A(int _a,int _b){
    a = _a;
    b = _b;
}

// Class_B class
class Class_B{
    public : 
        void show_value(Class_A & _a);
};

// show_value
void Class_B::show_value(Class_A & _a){
    cout << ">>> Details <<<" << endl;
    cout << "A : " << _a.a << endl;
    cout << "B : " << _a.b << endl;
}

int main(void){
    // create a_object
    Class_A a_object(30,50);
    Class_B b_object;

    b_object.show_value(a_object);
    return 0;
}