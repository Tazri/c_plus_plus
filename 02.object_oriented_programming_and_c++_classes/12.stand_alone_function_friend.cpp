#include <iostream>

using namespace std;

// forward referencing
class Position;
void show_value(Position);

// create class
class Position{
    int x,y;
    public : 
        Position(int _x = 0,int _y = 0);
        friend void show_value(Position);
};

Position::Position(int _x,int _y){
    x = _x;
    y = _y;
}

// write defination of show_value function
void show_value(Position _a){
    cout << ">> Position <<" << endl;
    cout << "> x : " << _a.x << endl;
    cout << "> y : " << _a.y << endl;
}

int main(void){
    // create function
    Position p(33,99);   

    show_value(p);
    return 0;
}