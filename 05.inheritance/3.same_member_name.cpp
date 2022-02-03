#include <iostream>

using namespace std;

// create base class
class Point{
    public : 
        void hello(void){
            cout << "Hello, from base class!"<<endl;
        }
};

// derived class
class Position:public Point{
    public : 
         void hello(void){
             cout << "Hello, from derived class" << endl;
         }
};

int main(void){
    Position *me = new Position;

    me->hello();
    me->Point::hello();

    return 0;
}