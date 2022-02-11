#include <iostream>

using namespace std;

// create template class Box
template <typename type_one,typename type_two>
class Box{
    type_one one;
    type_two two;
    public : 
        Box(type_one _one,type_two _two);
        void show_value(void);
};

// define the constructor of Box
template <typename type_one,typename type_two>
Box<type_one,type_two>::Box(type_one _one,type_two _two){
    one = _one;
    two = _two;
}

// define show_value member function of Box 
template <typename type_one,typename type_two>
void Box<type_one,type_two>::show_value(void){
    cout << "Template Box" << endl ;
    cout << "one : " << one << endl;
    cout << "two : " << two << endl;
}

// create specialization template class Box
template <>
class Box <char,char>{
    char mark_one;
    char mark_two;

    public : 
        Box(char _mark_one,char _mark_two){
            mark_one = _mark_one;
            mark_two = _mark_two;
        };
        void show_value(void){
            cout << "Specialization Class template" << endl;
            cout << "Mark One : " << mark_one << endl;
            cout << "Mark Two : " << mark_two << endl;
        };
};


int main(void){
    Box <int,int> box_one(2,3);
    Box <char,char> box_two('d','a');

    cout << "box_one.show_value() : " << endl;
    box_one.show_value();

    cout << "\nbox_two.show_value() : " << endl;
    box_two.show_value();
    return 0;
}