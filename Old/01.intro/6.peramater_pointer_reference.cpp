#include <iostream>

using namespace std;

// function prototype
void swap_value(int &,int &);

int main(void){
    int x,y;
    x = 30;
    y = 100;

    cout << "Before Swaping" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    
    swap_value(x,y);
    cout << "After Swaping" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}

// swap_value function
void swap_value(int &x,int &y){
    int temp = y;
    y = x;
    x = temp;
}