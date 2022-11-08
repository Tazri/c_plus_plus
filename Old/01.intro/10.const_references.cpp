#include <iostream>

using namespace std;

int main(void){
    int x = 30;

    // declear const reference
    const int & cr_x = x;
    
    // can not do that
    // cr_x = 33;

    // but we can change x value by x
    cout << "cr_x = " << cr_x << endl;
    cout << "changing value by x" << endl;
    x = 0;
    cout << "cr_x = " << cr_x << endl;
    
    return 0;
}