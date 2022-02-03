# include <iostream>
# include <string.h>

using namespace std;

// create classes
class Point{
    public :
        int x,y;
        Point(int _x,int _y){
            x = _x;
            y = _y;
        }
        void set_point(int _x,int _y){
            x = _x;
            y = _y;
        }

        void show_point(void){
            cout << "Point(";
            cout << x << "," << y << ")" << endl;
        }
};

class Mark{
    public :
        char mark;
        Mark(char _mark);
        void show_mark(void);
        void set_mark(char _mark);      
};

Mark::Mark(char _mark){
    mark = _mark;
}

void Mark::show_mark(void){
    cout << "mark : " << mark << endl;
}

void Mark::set_mark(char _mark){
    mark = _mark;
}


// create derived class
class Person:public Point,public Mark{
    public :
        char name[20];
        Person(char _name[],char _mark,int _x = 0,int _y  = 0);
        void show_person(void);
};

// defination person
Person::Person(char _name[],char _mark,int _x,int _y):Point(_x,_y),Mark(_mark){
    strcpy(name,_name);
}

void Person::show_person(void){
    cout << ">>> Person Details <<<" << endl;
    cout << "> name : " << name << endl;
    cout << "> position :" ;
    show_point();
    cout << "> " ;
    show_mark();
    cout << ">>> Finish Details <<<" << endl;
}

int main(void){
    Person me("Md Tazri",'a');
    me.set_point(11,22);
    me.set_mark('p');

    me.show_person();
    return 0;
}