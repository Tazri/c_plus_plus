# include <iostream>

using namespace std;

// create class
class Point{
    public : 
        int x,y;
        Point(int _x = 0,int _y = 0){
            this->x = _x;
            this->y = _y;
        }
        void show_address(void){
            cout << "address &this->x " << &(this->x) << endl;
            cout << "address this " << this << endl;
        }
};



int main(void){
    Point x;

    x.show_address();
    cout << "address &x.x : " << &x.x << endl;
    cout << "address &x : " << &x << endl;
    return 0;
}