#include <iostream>

using namespace std;

// create template class Point
template <class type>
class Point{
    type x,y;

    public : 
        // constructor
        Point(type _x,type _y);
        
        void show_value(void);
        void set_value(type _x,type _y);
        
        // destrucotr
        ~Point(void);
};

// define the constractor
template <class type>
Point<type>::Point(type _x,type _y){
    x = _x;
    y = _y;
}

// define show_value of Point template class
template <class type>
void Point<type>::show_value(void){
    cout << "Point(" << x << "," << y << ")" << endl;
}

// define set_value of Point template class
template <class type>
void Point<type>::set_value(type _x,type _y){
    x = _x;
    y = _y;
};

// defination of destructor
template <class type>
Point<type>::~Point(void){
    cout << "Point is destructed." << endl;
}

int main(void){
    // create point template class object
    Point<int> me(3,2);

    cout << "me.show_value() : " << endl;
    me.show_value();

    me.set_value(6,12);
    cout << "\nafter me.set_value(3,2) , then me.show_value() : " << endl;
    me.show_value();
    return 0;
}