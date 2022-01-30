#include <iostream>

using namespace std;

// create class
class Position{
    int x,y,id;

    public :
        static int total;
        Position(int _x = 0,int _y = 0);
        ~Position(void);
        void change_position(int _x = 0,int _y = 0);
        void show_position(void);

};

int Position::total = 0;

// constructor
Position::Position(int _x,int _y){
    x = _x;
    y = _y;
    id = total++;
}

// destructor
Position::~Position(void){
    total--;
}

// Position::show_position
void Position::show_position(void){
    cout << ">>> Position Detailts " << id << " <<<" <<endl;
    cout << "> x : " << x << endl;
    cout << "> y : " << y << endl;
    cout << ">>> Finish Details <<<\n\n" << endl;
}

// Position::change_position
void Position::change_position(int _x,int _y){
    x = _x;
    y = _y;
}

int main(void){
    Position me(33,55);
    Position other;
    other = me;
    
    cout << ">>> Before Changing Value <<<" << endl;
    me.show_position();
    other.show_position();

    cout << ">>> After Changing Value <<<" << endl;
    me.change_position(1,1);
    me.show_position();
    other.show_position();

    return 0;
}