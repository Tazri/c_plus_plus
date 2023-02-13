#include <iostream>
#include <string.h>

using namespace std;

// create class
class Person{
    private : 
    int height;
    int age;

    public :
    Person(char _name[],int _age,int _height){
        strcpy(name,_name);
        age = _age;
        height = _height;
    } 
    char name[30];
    int get_height(void){
        return height;
    }
    int get_age(void){
        return age;
    }
    void set_age_and_height(int _age,int _height){
        age = _age;
        height = _height;
    }
    
};

int main(void){
    Person tazri("Md Tazri",17,5.1);

    cout << ">>> Print Details About Tazri <<<" << endl;
    cout << "Name   : " << tazri.name << endl;
    cout << "Age    : " << tazri.get_age() << endl;
    cout << "Height : " << tazri.get_height() << endl;

    return 0;
}