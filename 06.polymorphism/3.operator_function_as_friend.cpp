#include <iostream>

using namespace std;

// create class
class React{
    int height,width;

    public : 
        React(int _height = 0,int _width = 0);
        void show(void);
        
        // friend function
        friend React operator+(React,int);
        friend React operator+(React,React);
        friend React operator++(React &);
};

React::React(int _height,int _width){
    height = _height;
    width = _width;
}

void React::show(void){
    cout << "react(" << width << "x" << height << ")" << endl;
}

// create operator function
React operator + (React left,int right){
    React temp;
    temp.height = left.height + right;
    temp.width = left.width + right;
    return temp;
}

React operator + (React left,React right){
    React temp;
    temp.height = left.height + right.height;
    temp.width = left.width + right.width;
    return temp;
}

React operator++(React& _react){
    ++_react.height;
    ++_react.width;
    return _react;
}

int main(void){
    React object = React(10,20);
    cout << "object.show() : " << endl;
    object.show();
    
    ++object;
    cout << "\nAfter ++object : " << endl;
    object.show();

    React object_plus_object = object + object;

    cout << "\nobject_plus_object.show() : " << endl;
    object_plus_object.show();
    return 0;
}