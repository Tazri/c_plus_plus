#include <iostream>
#include <string.h>

using namespace std;

// create class
class Person{
    char *name;
    int age;

    public :
        static int total_person;
        Person(char *_name,int age);
        ~Person(void);
        void show_person(void);
        void change_name(char *_name);
};

int Person::total_person = 0;

// constructor
Person::Person(char *_name,int _age){
    name = new char[40];
    strcpy(name,_name);
    age = _age;   
    total_person++;
}

// destructor
Person::~Person(void){
    total_person--;
}

// show_person
void Person::show_person(void){
    cout << "Person : " << total_person << endl;
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
    cout << "\n";
}

// change_name
void Person::change_name(char *_name){
    strcpy(name,_name);
}

int main(void){
    Person me("Md Tazri",17);
    Person other("Focasa",20);

    cout << ">>> Before copy and changing <<<" << endl;
    me.show_person();
    other.show_person();

    cout << "\n>>> After copy and changing <<<" << endl;
    other = me;
    me.change_name("Troy");
    me.show_person();
    other.show_person();
    return 0;
}