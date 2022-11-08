#include <iostream>

using namespace std;

int main(void){
    // get name
    char name[30];

    cout << "Please Enter Name : ";
    cin.getline(name,sizeof(name));
    cout << "Size of " << name << " is : " << cin.gcount() << endl;

    cout << "Please Enter a Name With Space : ";
    cin.getline(name,sizeof(name));
    cout << "Size of " << name << " is : " << cin.gcount() << endl;

    return 0;
}