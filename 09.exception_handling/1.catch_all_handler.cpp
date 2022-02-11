#include <iostream>

using namespace std;


int main(void){
    try{
        // its a error
        double a = 30;
        throw a;
    }catch(...){
        cout << "Something is wrong :(" << endl;
    }
    return 0;
}