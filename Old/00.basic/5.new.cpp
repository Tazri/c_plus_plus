#include <iostream>

using namespace std;

int main(void){
    int *p = new int(20);

    *p = 3000;
    cout << "number = " << *p <<endl;
    delete p;
    return 0;
}