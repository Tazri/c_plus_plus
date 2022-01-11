#include <iostream>

using namespace std;

// create simple class
class Person{
    private : 
    int age,roll,height,weight;
    public : 
    int get_age(void){ // inline function
        return age;
    };
    void set_age(int _age);
};

// define set_age function outside the class
void Person::set_age(int _age){
    age = _age;
}

int main(void){
    // create object
    Person tazri;

    tazri.set_age(17);
    cout << "Age : " << tazri.get_age() << endl;
    return 0;
}