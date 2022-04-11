#include <iostream>
#include <string.h>

using namespace std;

namespace some_class{
    class Person{
        protected : 
            char name[30];
            int age;
            bool is_fill;
            static int total_person;

        public :
            // constructor
            Person(void); // constructor
            Person(char _name[],int _age); // constructor

            // member function
            bool set_details(char _name[],int _age); 
            bool show_details(void);
            
            // static function
            static void show_total_person_number(void){
                cout << ">>> Total Person created : " << total_person << endl;
            }

            // destructor
            ~Person(void);
    };

    // define static member of Person class
    int Person::total_person = 0;

    // constructor defination
    Person::Person(void){
        total_person++;
    }

    Person::Person(char _name[],int _age){
        set_details(_name,_age);
        total_person++;
    }

    // set_details
    bool Person::set_details(char _name[],int _age){
        strcpy(name,_name);
        age = _age;
        is_fill = true;
        return true;
    }

    // show_details
    bool Person::show_details(void){
        if(is_fill){
            cout << "> " << name << "(" << age << ")" << endl;
            return true;
        }else{
            cout << "> Person -" << "undefine" << endl;
            return false;
        }
    }

    // destructor
    Person::~Person(void){
        total_person--;
    }

    // student which is derievd class of Person
    class Student:private Person{
        int id;

        public : 
            // constructor
            Student(void){/* nothing do here */}; // constructor
            Student(char _name[],int _age,int _id); // constructor

            // member function
            bool set_details(char _name[],int _age,int _id);
            bool show_details(void);
    };

    // constructor
    Student::Student(char _name[],int _age,int _id):Person(_name,_age){
        id = _id;
    }

    // set_details for set the student information here
    bool Student::set_details(char _name[],int _age,int _id){
        id = _id;
        Person::set_details(_name,_age);
        return true;
    }

    bool Student::show_details(void){
        if(is_fill){
            cout << "> Student -" << name << "(" << age << ")("  << id << ")" << endl;
            return true;
        }else{
            cout << "> Student -undefine" << endl;
            return false;
        }
    }

    // class employee which is derived from Person
    class Employee:private Person{
        int salary;

        public : 
            // constructor
            Employee(void){/* nothing here */} // constructor
            Employee(char _name[],int _age,int _salary); // constructor

            // member function
            bool set_details(char _name[],int _age,int _salary);
            bool show_details(void);
    };

    // constructor
    Employee::Employee(char _name[],int _age,int _salary):Person(_name,_age){
        salary = _salary;
    }

    // set_details for employee
    bool Employee::set_details(char _name[],int _age,int _salary){
        Person::set_details(_name,_age);
        salary = _salary;
        return true;
    }

    // show_details for employee
    bool Employee::show_details(void){
        if(is_fill){
            cout << "> Employee -" << name << "(" << age << ")(" << salary << ")" << endl; 
        }else{
            cout << "> Employee -undefine" << endl;
        }
        return is_fill;
    }
}