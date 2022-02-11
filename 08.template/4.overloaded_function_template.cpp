#include <iostream>

using namespace std;

// create overloaded template function show_value
template <class type>
void show_value(type _value){
    cout << "show_vlaue with one parameter : " << _value << endl;
}

// overlaod the show_value tamplate function
template <class type_one,class type_two,class type_three>
void show_value(type_one _one,type_two _two,type_three _three){
    cout << "show_value with three parameter" << endl;
    cout << "type_one : " << _one << endl;
    cout << "type_two : " << _two << endl;
    cout << "type_three : " << _three << endl;
}

int main(void){
    cout << "show_value(3.3) : " << endl;
    show_value(3.3);

    cout << "\nshow_value(3.2,\"Hello\",2) : " << endl;
    show_value(3.2,"hello",2);
    return 0;
}