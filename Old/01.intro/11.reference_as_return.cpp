#include <iostream>

using namespace std;

int x = 20;

// function prototype
int & return_r(void){
    return x;
}

int main(void){
    cout << "x Before Change" << endl;
    cout << "x = " << x << endl;

    return_r() = 403;

    cout << "after change" << endl;
    cout << "x = " << x << endl;
    return 0;
}