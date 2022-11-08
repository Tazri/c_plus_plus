#include <iostream>
#include <string.h>

using namespace std;

// create namespace
namespace block_one{
    // create person class
    class Person{
        char name[30];
        int age;
        bool is_fill = false;

        public : 
            Person(){/* do nothing */}; // constructor
            Person(char [],int); // constructor
            bool set_datails(char [],int); // set_details for set the person details
            bool show_details(void); // show_details for show the person details in compiler
    };

    // person constructor
    Person::Person(char _name[],int _age){
        this->set_datails(_name,_age); // call the set details for set the person details
    }

    // show person details
    bool Person::show_details(void){
        if(is_fill){
            cout << "Person(" << name << "," << age << ")" << endl;
            return true;
        }else{
            cout << "Person(" << "anonymous" << ")" << endl;
            return false;
        }
    }

}

// set_details of Person member
bool block_one::Person::set_datails(char _name[],int _age){
    strcpy(name,_name);
    age = _age;
    is_fill = true;
    return true;
}

int main(void){
    // create person one using namespace
    block_one::Person person_one;
    person_one.set_datails("Alayth",32);
    
    // create person two
    block_one::Person person_two("Md Tazri",19);

    person_one.show_details();
    person_two.show_details();
    return 0;
}