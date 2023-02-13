#include <iostream>

using namespace std;

// create class
class React{
    int height,width;

    public : 
        React(int _height = 0,int _width = 0){
            height = _height;
            width = _width;
        }

        friend void operator<<(ostream &os,React _r);
};

// create friend operator function
void operator<<(ostream &os,React _r){
    os << "Raect :" << _r.width << " X " << _r.height << endl; 
}

int main(void){
    React box(30,40);
    cout << box;
    return 0;
}