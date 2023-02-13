#include <iostream>

using namespace std;

// create class
class Position_A;

// Class_B Function
class Temp{
    public : 
    // don't write inline defination
    void show_value(Position_A);
};


class Position_A{
    int x,y;
    public :
        Position_A(int _x = 0,int _y = 0);
        friend void Temp::show_value(Position_A);
};

// Position constructor
Position_A::Position_A(int _x,int _y){
    x = _x;
    y = _y;
}


// create show_value function
void Temp::show_value(Position_A _a){
    cout << ">>> Position <<<" << endl;
    cout << "> X : " << _a.x << endl;
    cout << "> Y :" << _a.y << endl;
}

int main(void){
    // create Position
    Position_A p(33,99);
    Temp temp;

    // show value
    temp.show_value(p);
    return 0;
}