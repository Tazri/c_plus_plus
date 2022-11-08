#include <iostream>
#include <string>

using namespace std;

class Person{
    public :
        void set_name(string n){
            name = n;
        }

        void print_name(void){
            cout << name << endl;
        }
    private : 
        string name;
};

int main(void){
    Person Tazri;

    Tazri.set_name("Md Tazri");
    Tazri.print_name();
    return 0;

}