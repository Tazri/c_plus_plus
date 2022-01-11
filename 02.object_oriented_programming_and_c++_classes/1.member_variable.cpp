#include <iostream>

using namespace std;

// simple class
class Person{
    public : 
        int age,roll,height;
};

int main(void){
    Person tazri;
    
    // print tazri object before define variable
    cout << ">>> Before Define Value <<<" << endl;
    cout << "Age : " << tazri.age << endl;
    cout << "Roll : " << tazri.roll << endl;
    cout << "Height : " << tazri.height << endl;

    tazri.age = 17;
    tazri.roll = 35;
    tazri.height = 5.1;

    // print tazri object after define value
    cout << ">>> After Define Value <<<" << endl;
    cout << "Age : " << tazri.age << endl;
    cout << "Roll : " << tazri.roll << endl;
    cout << "Height : " << tazri.height << endl;

    return 0;
}