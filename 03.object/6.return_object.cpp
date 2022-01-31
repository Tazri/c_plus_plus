#include <iostream>

using namespace std;

// create point simple class
class Point{
    public :
        char mark;
        int x,y;

        // member function here
        Point(char _mark,int _x = 0, int _y = 0){
            mark = _mark;
            x = _x;
            y = _y;
        }
        ~Point(void){
            cout << "deleted : " << mark << endl;
        }
        void show(void){
            cout << "Point " << mark << endl;
            cout << "X : " << x << endl;
            cout << "Y : " << y << endl;
        }
};

// create_point
Point create_point(char _mark){
    // create point which is return 
    Point d(_mark,22,11);
    return d;
}

int main(void){
    Point me = create_point('a');
    me.show();
    return 0;
}