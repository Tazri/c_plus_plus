#include <iostream>

using namespace std;

// here a function which throw the error
void throw_error(void){
    int n = 30;
    throw n;
}

int main(void){
    try{
        throw_error();
    }catch(int){
        cout << "we caought the int type error :(" << endl;
    }
    
    return 0;
}