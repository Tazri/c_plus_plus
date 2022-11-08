#include <iostream>

using namespace std;

class FunctionSome{
    public : 
        void say_hi(){
            cout << "Hi User!" << endl;
        }
};

int main(void){
    
    FunctionSome  test;
    test.say_hi();

    return 0;
}