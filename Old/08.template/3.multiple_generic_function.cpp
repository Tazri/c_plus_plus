#include <iostream>

using namespace std;

// create template function with multiple generic function
template <class type_one,class type_two,class type_three>
void show_value(type_one _one,type_two _two,type_three _three){
    cout <<"Type_one : " << _one << endl;
    cout <<"Type_two : " << _two << endl;
    cout <<"Type_three : " << _three << endl;
}

int main(void){
    cout <<"show_vlue(2,3.2,'a') : " << endl;
    show_value(3,3.2,'a');

    cout <<"\nshow_value(3.2,2,\"hello\") :" << endl;
    show_value(3.2,2,"hello");
    return 0;
}