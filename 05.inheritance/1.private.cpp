#include <iostream>

using namespace std;

// create base class
class Point{
    public : 
         int x,y;
         Point(int _x = 0,int _y = 0);
         void show_point(void);
};

Point::Point(int _x,int _y){
    x = _x;
    y = _y;
}

void Point::show_point(void){
    cout << "Point(" << x << "," << y << ")" << endl;
}

// create derived class
class Position:private Point{
    public : 
        char mark;
        Position(char _mark,int _x = 0,int _y = 0):Point(_x,_y){
            mark = _mark;
        }
        void show_position(void);

};

void Position::show_position(void){
    cout << "Position<" << mark << ">" << "(" << x << "," << y << ")" << endl; 
}

int main(void){
    Position *me = new Position('a');
    Point *me_point = new Point;

    me->show_position();

    // try to access base public member 
    // cout << "me->x" << me->x << endl; // throw error

    // but we can access point x value
    me_point->show_point();
    cout << "me_point->x " << me_point->x << endl;
}