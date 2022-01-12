#include <iostream>

using namespace std;

// create class
class Person{
    // creating private memeber without private keyword
    int age;
    void print_hello(void);

    // creating private memeber with private keyword
    private :
        int height;

    public : 
        void set_age_height(int,int);
        void print_details(void);
    
};

// print_hello function
void Person::print_hello(void){
    cout << "Hello, World!" << endl;
}

// set_age_height funciton
void Person::set_age_height(int _age,int _height){
    age = _age;
    height = _height;
}

// print_details function
void Person::print_details(void){
    cout << ">>> Details <<<" << endl;
    cout << "> Age : " << age << endl;
    cout << "> Height : " << height << endl;
    print_hello();
}

int main(void){
    // create person
    Person p_one;
    p_one.set_age_height(17,5);

    // this line will get error
    // p_one.print_hello();
    
    p_one.print_details();

    return 0;
}