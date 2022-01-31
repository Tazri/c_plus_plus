#include <iostream>

using namespace std;

// create simple class
class Block{
    char grade;

    public :
        Block(char _grade);
        ~Block(void);
        void show(void);

};

Block::Block(char _grade){
    grade = _grade;
}

Block::~Block(void){
    cout << "Block " << grade << " Deleted" << endl;
}


void Block::show(void){
    cout << "This is block " << grade << endl;
}


// create sample function which call Block object
void call_block(void){
    Block a('a'),b('b'),c('c');

    a.show();
    b.show();
    c.show();

    cout << ">>> Finish Function Here <<<" << endl;
}

int main(void){
    call_block();
    return 0;
}