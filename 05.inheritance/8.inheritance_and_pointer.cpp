#include <iostream>

using namespace std;

// create point class
class Point{
    public : 
        int x,y;
        Point(int _x = 0,int _y = 0){
            x = _x;
            y = _y;
        }

        void show_point(void){
            cout << "Point(" << x;
            cout << "," << y << ")" << endl;
        }
};

class Mark:public Point{
    public : 
        char mark;
        Mark(char _mark = 'c',int _x = 0,int _y = 0):Point(_x,_y){
            mark = _mark;
        }

        void show_mark(void){
            cout << "Mark<" << mark << ">";
            cout << "(" << x << ",";
            cout << y << ")" << endl;
        }
};

int main(void){
    Point *base;
    base = new Mark('a',11,22);

    base->show_point();
    // error throw here
    // base->show_mark();
    return 0;
}