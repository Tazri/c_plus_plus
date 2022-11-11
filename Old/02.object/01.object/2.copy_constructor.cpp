#include<iostream>
#include<string.h>

using namespace std;

// create human class
class Human{
    public :
        // member
        char *name;


        // member function
        Human(char *_name);
        Human(Human &_dist);
        void show(void){
            cout << "Name : " << name << endl;
        }

};

// constructor
Human::Human(char *_name){
    name = new char[40];
    strcpy(name,_name);
}

// copy constructor
Human::Human(Human &_dist){
    strcpy(name,_dist.name);
}

int main(void){
    // create human
    Human me("Tazri");
    Human other = me;

    cout << ">>> Before changing " << endl;
    me.show();
    other.show();

    cout << ">>> After changing " << endl;
    strcpy(me.name,"Solus");
    me.show();
    other.show();

    cout << ">>> After again changing " << endl;
    strcpy(other.name,"Troy");
    me.show();
    other.show();
}