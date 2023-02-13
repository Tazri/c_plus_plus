#include <iostream>

using namespace std;

// create base class
class Point{
    char c = 'a';
    protected : 
        int x,y;
        void set_point(int _x,int _y);
    public : 
        Point(int _x = 0,int _y  = 0);
        void show_point(void);
};

Point::Point(int _x,int _y){
    x = _x;
    y = _y;
}

void Point::set_point(int _x,int _y){
    x = _x;
    y = _y;
}

void Point::show_point(void){
    cout << "Point(" << x << "," << y << ")" << endl;
}

// base class
class Position:public Point{
    public : 
        char mark;
        Position(char _mark);
        void set_position(int _x,int _y);
        void show_position(void);
};

Position::Position(char _mark){
    mark = _mark;
}

void Position::set_position(int _x,int _y){
    set_point(_x,_y);
}

void Position::show_position(void){
    cout << "Position(" << mark << ")";
    cout << "(" << x << "," << y << ")" << endl;
    
    // throw error here because c is private member of base class
    // cout << "c " << c << endl;
}

// derived class
int main(void){
    Position *me = new Position('a');

    me->set_position(22,11);
    me->show_position();
    return 0;
}