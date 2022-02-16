#include <iostream>

using namespace std;

int main(void){
    double number = 3034.325000;

    cout << "Default number : " << number << endl;

    cout.setf(ios::showpoint | ios::showpos);

    cout << "after set seft to -> showpoint and showpos : " << endl;
    cout << "number : " << number << endl;

    // unseft the showpoint
    cout.unsetf(ios::showpoint);
    cout << "\n\nclear the showpoint by ios::showpoint" << endl;

    cout.setf(ios::hex | ios::showbase);
    cout << "set setf to -> hex and showbase : " << endl;
    cout << "number " << hex << (int)number << endl;
    return 0;
}