#include <iostream>

using namespace std;

// creating class
class Sample{
    public : 
        static int number;

        // define static function member
        static void print_number(void);
        static void hello(void){
            cout << "Hello, World!" << endl;
        }
};

// define static variable member
int Sample::number;

// define static function member
void Sample::print_number(void){
    cout << "Number : " << number << endl;
}


int main(void){
    Sample::number = 300;
    Sample::hello();
    Sample::print_number();
}