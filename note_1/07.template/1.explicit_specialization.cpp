#include <iostream>

using namespace std;

// create function template add function
template <class Type>
void add(Type _a,Type _b){
    cout << "Template add : " << _a + _b << endl;
}

// create normal add function
void add(int _a,int _b){
    cout << "add function : " << _a + _b << endl;
}

int main(void){
    cout << "add(3.32,3.2) : " << endl;
    add(3.32,3.2);
    cout << "add(3,2) : " << endl;
    add(3,2);
    return 0;
}