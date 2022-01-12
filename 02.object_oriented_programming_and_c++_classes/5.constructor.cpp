#include <iostream>

using namespace std;

// one way to declear constructor
// class Pointer{
//     int x,y;
//     public :
//         Pointer(int _x,int _y){
//             x = _x;
//             y = _y;
//         };

//         void print(void){
//             cout << ">>> Poitner <<<" << endl;
//             cout << "> x : " << x << endl;
//             cout << "> y : " << y << endl; 
//         }
// };

// another way to declear constructor
class Pointer{
    int x,y;

    public :
        Pointer(int,int);
        void print(void);
};

// constructor function
Pointer::Pointer(int _x,int _y){
    x = _x;
    y = _y;
}

// print function
void Pointer::print(void){
    cout << ">>> Pointer Details <<<" << endl;
    cout << "> x : " << x << endl;
    cout << "> y : " << y << endl;
}

// main function
int main(void){
    // create pointer
    Pointer position(45,78);
    position.print();
    return 0;
}