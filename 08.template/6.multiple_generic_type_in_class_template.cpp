#include <iostream>

using namespace std;

// create class with multiple generic type
template <class type_one,class type_two,class type_three>
class Box{
    type_one one;
    type_two two;
    type_three three;

    public : 
        // constructor prototype
        Box(type_one _one,type_two _two,type_three _three);

        // member function
        void show_value(void);
};

// Box constructor
template <class type_one,class type_two,class type_three>
Box<type_one,type_two,type_three>::Box(type_one _one,type_two _two, type_three _three){
    one = _one;
    two = _two;
    three = _three;
}

// show_value member function of Box : 
template <class type_one,class type_two,class type_three>
void Box<type_one,type_two,type_three>::show_value(void){
    cout << "value of box is : " << endl;
    cout << "type_one : " << one << endl;
    cout << "type_two : " << two << endl;
    cout << "type_three : " << three << endl;
}

int main(void){
    // create box
    Box<int,double,char*> box_one(32,3.2,"Md Tazri");
    Box<double,char*,int> box_two(3.2,"Focasa",4);

    cout << "box_one.show_value() : " << endl;
    box_one.show_value();

    cout << "\nbox_two.show_value() : " << endl;
    box_two.show_value();

    return 0;
}