#include <iostream>

using namespace std;

// create react class
class React{
    int height;
    int width;

    public : 
        // constructor overloading
        React(void);
        React(int _height,int _width);

        // member function
        void show(void);

        // operator overloading
        React operator + (int _number);
        React operator + (React);
        React operator - (int _number);
        React operator - (React);
        React operator++();
        React operator--();
};

// constructor
React::React(void){
    height = 0;
    width = 0;
}

React::React(int _height,int _width){
    height = _height;
    width = _width;
}

// member function
void React::show(void){
    cout << "React(" << width << "x" << height << ")" << endl;
}

// operator overloading
React React::operator +(int _number){
    React temp;
    temp.width = React::width + _number;
    temp.height = React::height + _number;
    return temp;
}

React React::operator -(int _number){
    React temp;
    temp.width = React::width - _number;
    temp.height = React::height - _number;
    return temp;
}

React React::operator +(React _react){
    React temp;
    temp.width = React::width + _react.width;
    temp.height = React::height + _react.height;
    return temp;
}

React React::operator -(React _react){
    React temp;
    temp.width = React::width - _react.width;
    temp.height = React::height - _react.height;
    return temp;
}

React React::operator++(){
    React temp;
    temp.width = ++React::width;
    temp.height = ++React::height;
    return temp;
}

React React::operator--(){
    React temp;
    temp.width = --React::width;
    temp.height = --React::height;
    return temp;
}

int main(void){
    React react(23,20);

    cout << "react.show()" << endl;
    react.show();

    ++react;
    cout << "\nafter ++react : " << endl;
    react.show();

    --react;
    cout << "\nafter --react :" << endl;
    react.show();

    React react_add_10 = react + 10;
    cout << "\nreact_add_10 :" << endl;
    react_add_10.show();

    React react_minus_react = react - react;
    cout << "\nreact_minus_react : " << endl;
    react_minus_react.show();
    return 0;
}