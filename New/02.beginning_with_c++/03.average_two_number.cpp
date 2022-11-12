#include <iostream>

using namespace std;

int main(void){
    float number_one, number_two, result;
    
    // input from user
    cout << "Enter first number : ";
    cin >> number_one;
    cout << "Enter sceond number : ";
    cin >> number_two;

    result = ( number_one + number_two ) / 2;

    cout << "The Result : " << result << endl;

    return 0;
}