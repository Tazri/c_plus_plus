#include <iostream>
#include <string>

using namespace std;

class MyClass{
    public :
        string name;
};

int main(void){
    MyClass me;

    me.name = "Md Tazri";

    cout << me.name << endl;

    return 0;
}