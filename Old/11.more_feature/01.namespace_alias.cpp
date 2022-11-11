#include <iostream>
#include "./lib/some_class.cpp" // include person class

/**
 * here namespace p_class assign value with some class
 * which is come from ./lib/some_class.cpp
 * 
 */
namespace p_class = some_class; 

/**
 * using keyword use for ableable the all value inside the namespace 
 * in certain scope
 * 
 */
using namespace p_class; // extract all value from p_class namespace into the global scope

int main(void){
    // create person
    Person *tazri = new Person("Md Tazri",19);
    Person *anonymous = new Person;
    anonymous->set_details("Anonymous",99);

    tazri->show_details();
    anonymous->show_details();

    Person::show_total_person_number();

    delete tazri;
    delete anonymous;
    return 0;
}