#include <stdio.h>

enum color {red=4,blue,black=4,green};

int main(){
    enum color a = 53;

    printf("color : %d\n",a);
    return 0;
}