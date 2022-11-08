#include <iostream>
#include <string.h>

using namespace std;

// create Point class
class Point{
    public :
        int x,y;
        Point(int _x  = 0,int _y = 0);
};

Point::Point(int _x,int _y){
    x = _x;
    y = _y;
}

// create age class use virtual keyword
class Age:virtual public Point{
    public :
        int age;
        Age(int _age){
            age = _age;
        }
};

// create person class
class Person: virtual public Point{
    public : 
        char name[30];
        Person(char _name[]){
            strcpy(name,_name);
        }
};

// cretae student
class Student:public Age,public Person{
    public : 
        int id;
        Student(char _name[],int _id,int _age,int _x = 0,int _y = 0);
        void show_details(void);
};

Student::Student(char _name[],int _id,int _age,int _x,int _y):Age(_age),Person(_name){
    id = _id;
    x = _x;
    y = _y;
}

void Student::show_details(void){
    cout << ">>> Student Details <<<" << endl;
    cout << "> name : " << name << endl;
    cout << "> age : " << age << endl;
    cout << "> id " << id << endl;
    cout << "> position : " << "Point(";
    cout << x << "," << y << ")" << endl;
    cout << ">>> Finish Details <<<" << endl;
}

int main(void){
    Student me("Md Tazri",324,17,11,22);
    me.show_details();
    return 0;
}