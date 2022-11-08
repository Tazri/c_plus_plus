#include <iostream>

using namespace std;

int main(void){
    int x,y;
    x = 20;
    y = 20;

    // type cating way in c
    double double_x = (double) x + 0.32;
    double double_y = double(y) + 0.32;

    // print the double_x and double_y
    cout << "double_x = " << double_x << endl;
    cout << "double_y = " << double_y << endl;
    return 0;
}