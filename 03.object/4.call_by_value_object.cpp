#include <iostream>

using namespace std;

// create class
class Position{
    char mark;
    int x;
    int *y;

    public : 
        Position(char _mark,int _x = 0,int _y = 0);
        ~Position();
        void show(void);
        void change(int _x,int _y);
};

Position::Position(char _mark,int _x,int _y){
    int d = _y;
    mark = _mark;
    x = _x;
    y =&d;
}

Position::~Position(){
    cout << "Deleted " << mark << endl;
}

void Position::show(void){
    cout << ">>> Point <<<" << endl;
    cout << "> x : " << x << endl;
    cout << "> *y : " << *y << endl;
    cout << "> mark : " << mark << endl;
    cout << ">>> Finish <<<" << endl;
}

void Position::change(int _x,int _y){
    x = _x;
    *y = _y;
}

// create simple function
void show_function(Position a){
    cout << "IN show function : " << endl;
    cout << "change y value to 1000 and x value 9000" << endl;
    a.change(9000,1000);
    a.show();
    cout << "finish function here." << endl;
}

int main(void){
    cout << "In Main Function : " << endl;
    // create position
    Position point('a',99,11);
    point.show();

    cout << "Pass the point in function : " << endl;
    show_function(point);

    cout << "point after finish function : " << endl;
    point.show();
}