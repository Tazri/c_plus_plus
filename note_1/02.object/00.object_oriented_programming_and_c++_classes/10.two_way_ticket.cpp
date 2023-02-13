#include <iostream>

using namespace std;

// create first forwarding reference
class Position_a;
class Position_b;

// create Position_a
class Position_a{
    int x,y;

    public : 
        Position_a(int _x = 0,int _y = 0);
        void show_value(Position_b &);
        friend Position_b;
};

Position_a::Position_a(int _x,int _y){
    x = _x;
    y = _y;
}

// create Position_b
class Position_b{
    int x,y;

    public :
        Position_b(int _x = 0,int _y = 0);
        void show_value(Position_a &);
        friend Position_a;
};

Position_b::Position_b(int _x,int _y){
    x = _x;
    y = _y;
}

// declear show_value here

void Position_a::show_value(Position_b &  _b){
    cout << ">>> Details(b) <<<" << endl;
    cout << "> x : " << _b.x << endl;
    cout << "> y : " << _b.y << endl;
}

void Position_b::show_value(Position_a & _a){
    cout << ">>> Details(a) <<<" << endl;
    cout << "> x : " << _a.x << endl;
    cout << "> y : " << _a.y << endl;
}

int main(void){
    Position_a point_a(11,22);
    Position_b point_b(88,99);

    point_a.show_value(point_b);
    point_b.show_value(point_a);

    return 0;
}