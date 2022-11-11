#include <iostream>

using namespace std;

// create function with same name
void add(void){

    cout << "add(void) " << "4 + 5 = 9" << endl;
}

int add(int a,int b){
    return a+b;
}

double add(double a,double b){
    return a+b;
}

int main(void){
    add();
    cout << "add(3,2) : " << add(3,2) << endl;
    cout <<"add(3.2,3.4) : " << add(3.2,3.4) << endl;
}