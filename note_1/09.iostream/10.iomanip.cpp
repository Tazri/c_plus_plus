#include <iostream>
#include <iomanip> // include iomanip header folder

using namespace std;

int main(void){
    bool bool_value = true;

    cout << "bool_value => " << bool_value << endl;
    cout << "bool_value << boolalpha => " << boolalpha << bool_value << endl;
    
    return 0;
}