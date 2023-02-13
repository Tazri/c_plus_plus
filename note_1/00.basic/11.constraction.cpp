#include <iostream>
#include <string>

using namespace std;

class Person{
    public :
        Person(string n){
            set_name(n);
        }
        void set_name(string n){
            name = n;
        }
        void print_name(){
            cout << name << endl;
        }
    private : 
        string name;
};

int main(void){
    Person me("Md Tazri");
    Person he("Focasa");

    me.print_name();
    he.print_name();
    
    return 0;
}