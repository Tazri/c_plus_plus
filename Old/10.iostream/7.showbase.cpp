#include <iostream>

using namespace std;

int main(void){
    int number = 19038;

    // modify the mainpuletor by cout.seft member function
    cout.setf(ios::showbase);

    // see the number by different number system
    cout << "number : " << number << endl;
    cout << "number : hex " << hex << number << endl;
    cout << "number : oct " << oct << number << endl;
    cout << "number : dec " << dec << number << endl;
     
    return 0;
}