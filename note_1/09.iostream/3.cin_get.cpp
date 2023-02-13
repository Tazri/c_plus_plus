#include <iostream>

using namespace std;

int main(void){
    char mark;
    char position;
    char name[30];

    // get name
    cout << "Please enter the name : ";
    cin.get(name,30);
    cin.get(); // get the enter
    
    // get mark 
    cout << "Please enter the mark : ";
    mark = cin.get();
    cin.get(); // get the enter
    
    // get position
    cout << "Please enter the position : ";
    position = cin.get();
    cin.get(); // get the enter



    cout << "Hey, " << name << endl;
    cout << "Your mark : " << mark << endl;
    cout << "Your position : " << position << endl;

    return 0;
}