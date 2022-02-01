#include <iostream>

using namespace std;

// class Point
class Point{
    char mark;
    int  x,y;

    public : 
        Point(char _mark,int _x = 0,int _y = 0);
        ~Point(void);
        void show(void){
            cout << "Point(" << mark << ")";
            cout << " (" << x << ", " << y <<")" << endl;
        }
};

Point::Point(char _mark,int _x,int _y){
    mark = _mark;
    x = _x;
    y = _y;
}


Point::~Point(void){
    cout << "Deleted " << mark << endl;
}

// show point array
void show_point_array(Point point_arr[],int _len){
    for(int i = 0; i < _len;i++){
        point_arr[i].show();
    }
}

int main(void){
    // create point of array
    Point points[3] = {Point('a',2,3),Point('b',4,5),Point('c',6,2)};

    // shorcat if need one peramter in class
    Point null_points[3] = {'x','y','z'};

    cout << "point" << endl;
    show_point_array(points,3);

    cout << "\nnull point" << endl;
    show_point_array(null_points,3);
    return 0;
}