# include <iostream>
# include <string.h>

using namespace std;

// create base class
class Point{
    public : 
        int x,y;
        Point(int _x = 0,int _y = 0){
            x = _x;
            y = _y;
        }
        void show_point(void){
            cout << "Point(" << x <<"," << y << ")" << endl;
        }
};

// create Position class
class Position:public Point{
    public : 
        char mark;
        Position(char _mark,int _x = 0,int _y= 0);
        void show_position(void);
};

Position::Position(char _mark,int _x,int _y):Point(_x,_y){
    mark = _mark;
}

void Position::show_position(void){
    cout << "Position<" << mark << ">";
    cout << "(" << x << "," << y << ")" << endl;
}

// create another Person class
class Person:public Position{
    public : 
        char name[30];
        Person(char *_name,char _mark);
        void set(int _x,int _y);
        void show(void);
};

Person::Person(char *_name,char _mark):Position(_mark){
    strcpy(name,_name);
}

void Person::set(int _x,int _y){
    x = _x;
    y = _y;
}

void Person::show(void){
    cout << ">>> Person Details <<<" << endl;
    cout << "> name : " << name << endl;
    cout << "> point : ";
    show_point();
    cout << "> position : ";
    show_position();
    cout << ">>> Finsih Details <<<" << endl << endl;
}

int main(void){
    Person me("Md Tazri",'a');
    me.set(33,22);
    me.show_point();
    me.show_position();
    me.show();
    return 0;
}