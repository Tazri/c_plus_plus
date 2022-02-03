#include <iostream>

using namespace std;

// create base class
class Point{
    public : 
        Point(void){
            cout << "constructor : base class" << endl;
        }
        ~Point(void){
            cout << "desttructor : base class" << endl; 
        }
};

// create derived class
class Position:public Point{
    public : 
        Position(void){
            cout << "constructor : derived clas" << endl;
        }

        ~Position(void){
            cout << "destructor : derived class" << endl;
        }
};


int main(void){
    Position *me = new Position;
    delete me;
    return 0;
}