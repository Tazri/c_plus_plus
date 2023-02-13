#include <iostream>

using namespace std;

int main(void){
    // create name
    char name[20];

    cout << "Enter Your Name : ";
    cin.read(name,10);
    cout << endl << "Hello, " << name;
    cout << "    How are you ? " << endl;

    return 0;
}