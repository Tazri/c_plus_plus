#include <iostream>

using namespace std;

// declear destructor
// class Sample{
//     public: 
//         Sample(void){
//             cout << "Object created" << endl;
//         };
//         ~Sample(void){
//             cout << "Object Deleted" << endl;
//         };
// };

// another way to declear destructor
class Sample{
    public : 
        Sample(void);
        ~Sample();
};

// declear constructor
Sample::Sample(void){
    cout << "Object was created" << endl;
};

Sample::~Sample(){
    cout << "Object was Deleted" << endl;
}

int main(void){

    {
        // create object
        Sample object;
    }

    return 0;
}