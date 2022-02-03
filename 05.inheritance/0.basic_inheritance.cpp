#include <iostream>
#include <string.h>

using namespace std;

// create base class
class Person{
    public : 
        char *name;
        int age;
        Person(char *_name,int _age);
        void show_person_info(void);
};

Person::Person(char *_name,int _age){
    name = new char[30];
    strcpy(name,_name);
    age = _age;
}

void Person::show_person_info(void){
    cout << name << " and age : " << age << endl;
}

// create derived class
class Student:public Person{
    public : 
        int id;
        char *sub;
        Student(char *_name,int _age,int _id,char *_sub);
        void show_student_details(void);
};

// create constructor when create it then called base class constructor after : then write defination
Student::Student(char *_name,int _age,int _id,char *_sub):Person(_name,_age){
    sub = new char [20];
    strcpy(sub,_sub);
    id = _id;
};

// show student info
void Student::show_student_details(void){
    cout << ">>> Details <<<" << endl;
    cout << "> Name :" << name << endl;
    cout << "> age : " << age << endl;
    cout << "> id : " << id << endl;
    cout << "> sub : " << sub << endl; 
    cout << ">>> Finsih <<<" << endl;
}

int main(void){
    // create student
    Student * me = new Student("Md Tazri",17,99,"Science");

    me->show_person_info();
    me->show_student_details();
    return 0;
}