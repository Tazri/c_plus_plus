#include <iostream>

using namespace std;

// create Point class
class Point{
    int x,y;
    public : 
     Point(int _x = 0,int _y = 0) {
         this->x = _x;
         this->y = _y;
     }
     void show(void){
         cout << "Point(" << x << " ," << y << " )" << endl;
     }
};

int main(void){
    Point * me = new Point(22,33);
    Point *points = new Point[3];

    // *points = Point(11,11);
    // *(points + 1) = Point(22,22);
    // *(points + 2) = Point(33,33);
    
    // we can do by array notation like this
    points[0] = Point(11,11);
    points[1] = Point(22,22);
    points[2] = Point(44,44);

    me->show();
    for(int i = 0;i < 3;i++){
        points[i].show(); // both working fine
        (points+i)->show(); // it working fine
    }

    delete me;
    delete [] points;
    return 0;
}