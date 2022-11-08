#include <iostream>
#include "./lib/some_class.cpp" // here declear some classes
#include <typeinfo> // use type id

using namespace std; 
using namespace some_class;

int main(void){
    // create student
    Student *tazri = new Student("Md Tazri",19,21);
    Student *troy = new Student("Troy Farhan",18,32);
    Employee *roy = new Employee("Roy Mostang",19,2200);

    cout << "Details of tazri roy and troy" << endl;
    tazri->show_details();
    roy->show_details();
    troy->show_details();
    
    cout << "\n> Analysis Tazri, Troy and roy : " << endl;
    if(typeid(tazri) == typeid(troy)){
        cout << "tazri and troy are the same object" << endl;
    }
    if(typeid(tazri) == typeid(roy)){
        cout << "tazri and roy are the same object" << endl;
    }
    if(typeid(tazri) != typeid(roy)){
        cout << "tazri and roy are not same object" << endl;
    }
    cout << "> Finish Analysis <" << endl;

    cout << "\n> Knowing about object" << endl;
    cout << "> typeid(tazri) : " << typeid(tazri).name() << endl;
    cout << "> typeid(troy) : " << typeid(troy).name() << endl;
}