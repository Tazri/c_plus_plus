#include <iostream>

using namespace std;

int main(void){
    char name[30];

    // get name from uer
    cout << "Please enter your name : ";
    cin >> name;
    cout << "\nHello, "<< name <<" :)" << endl;
    return 0;
}