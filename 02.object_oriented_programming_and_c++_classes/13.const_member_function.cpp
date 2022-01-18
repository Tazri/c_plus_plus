#include <iostream>

using namespace std;

// create class
class Position{
    int x,y;
    public : 
        Position(int _x = 0, int _y = 0);
        
        // create two const function
        void show_x(void) const{
            cout << "> x : " << x << endl;
        }

        void show_y(void) const;

        void change_x(int _x) const{
            // can not possible
            // x = _x;
        }
    
};

// create constructor
Position::Position(int _x,int _y){
    x = _x;
    y = _y;
}

void Position::show_y(void) const{
    cout << "> y : " << y << endl;
}


int main(void){
    // create postion variable
    Position p(33,99);

    cout << ">>> Position <<<" << endl;
    p.show_x();
    p.show_y();
    return 0;
}