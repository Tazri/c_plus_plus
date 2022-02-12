#include <iostream>

using namespace std;


int main(void){
    char name[30];
    char message[250];

    // get name from user
    cout << "Please enter you name : ";
    // cin.getline(array,size,delemitaion = '\n');
    cin.getline(name,30);

    cout << "Please Enter Your message : " << endl;
    cin.getline(message,250,EOF);

    cout << "Hello, " << name << ". :)" << endl;
    cout << "Your message is : " << endl;
    cout << message << endl;
    return 0;
}