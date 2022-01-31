#include <iostream>

using namespace std;

// class
class Point{
    public :
        int x,y;
        char mark;
        // member function
        Point(char _mark,int _x = 0,int _y = 0);
        ~Point(void);
        void show(void);
};

Point::Point(char _mark,int _x, int _y){
    mark = _mark;
    x = _x;
    y = _y;
}

Point::~Point(void){
    cout << "Deleted Point " << mark << endl;
}

void Point::show(void){
    cout << ">>> Point " << mark << " <<<" << endl;
    cout << "> X " << x << endl;
    cout << "> Y " << y << endl << endl;
}

// sample function
void sample(Point *p){
    cout << "In Sampe function : ";
    p->show();
    p->x = 11;
    p->y = 22;
    cout << "change x to 11 and y to 22";
}

int main(void){
    Point point('a',7,8);
    sample(&point);
    point.show();
}

