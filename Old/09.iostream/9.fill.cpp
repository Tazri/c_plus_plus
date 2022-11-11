#include <iostream>

using namespace std;

int main(void){
    char name[10] = "Md Tazri";
    double number = 4033.333423;

    // cout fill
    cout.fill('.');
    cout << "Name : ";
    cout.width(24);
    cout << name << "\n";

    cout.fill('.');
    cout.width(24);
    cout.setf(ios::left);
    cout << "Number : ";
    cout.precision(6);
    cout.width(10);
    cout.setf(ios::right | ios::showpoint);
    cout << number;
    cout.setf(ios::showbase | ios::hex);

    cout << "\n" << (int) number << endl;


    return 0;
}