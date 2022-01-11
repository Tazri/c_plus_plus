#include <iostream>

using namespace std;

// create class
class Person{
    public : 
        int age,height,weight;
    public : 
        int account;
        void show_info(void){
            cout << ">>> Details <<<" << endl;
            cout << "> Age : " << age << endl;
            cout << "> Height : " << height << endl;
            cout << "> Weight : " << weight << endl;
        }
};

int main(void){
    // create object
    Person tazri;
    
    // access the member function
    tazri.age = 17;
    tazri.height = 5;
    tazri.weight = 45;
    tazri.account = 0;

    // access the public function
    tazri.show_info();
    cout << "> Balance : " << tazri.account << endl;

    return 0;
}