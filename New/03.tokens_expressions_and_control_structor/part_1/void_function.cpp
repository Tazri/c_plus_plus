#include <iostream>

using namespace std;

// void function prototype

void print_message(void);


// main function must be return int in c++
int main(void){ // here the argument list void
    print_message();

    return 0;
}

// here the void function
void print_message(void){ /* the argument list are void */
    printf("What's Up! World ?\n");
}