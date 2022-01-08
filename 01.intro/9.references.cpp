#include <iostream>

using namespace std;

int main(void){
    int x = 90;

    // declear reference
    int &r_x = x;

    cout << "r_x = " << r_x << endl;

    cout << "After change value by refercence" << endl;
    r_x = 300;
    cout << "x = " << x << endl;
    return 0;
}