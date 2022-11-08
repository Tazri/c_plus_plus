#include <iostream>

using namespace std;

// create class template Point
template <typename type>
class Point{
    type x,y;
    public : 
        // constructor
        Point(type _x,type _y);

        // member function
        void show_value(void);
};

// define constructor of point
template <typename type>
Point<type>::Point(type _x,type _y){
    x = _x;
    y = _y;
}

// define show_value member function of Point
template <typename type>
void Point<type>::show_value(void){
    cout << "Point(" << x << "," << y << ")" << endl;
}

int main(void){
    Point <int> me(3,2);
    Point <float> anonymous(3.2,3.34);

    cout << "me.show_value() : " << endl;
    me.show_value();
    
    cout << "\nanonymous.show_value() : " <<endl;
    anonymous.show_value();

    return 0;
}