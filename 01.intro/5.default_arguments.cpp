#include <iostream>

using namespace std;

// function prototype
void print_value(
    int x = 55, /* default value */
    int y = 99 /* default value */
    );
/**
 * default value must declear in 
 * function prototype
 * 
 * */

int main(void){
    print_value(30,40);
    print_value();
    return 0;
}

// print_value function
void print_value(int x,int y){
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "\n" << endl;
}