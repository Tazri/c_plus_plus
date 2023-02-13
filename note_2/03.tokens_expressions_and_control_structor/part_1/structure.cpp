#include <iostream>
#include <string.h>

using namespace std;

// create structure
struct book{
    char name[20];
    char author[15];
    float price;
};

// function to printing book
// void print_details(struct book b); 
void print_details(book b); // only work c++ not in c


int main(void){
    // create two book
    struct book tin_guyenda = {
        "Aurthe Shagor",
        "Rakib Hasan",
        211.33
    };

    // it allow only c++
    book story; // not allow in c

    
    // define story another way
    strcpy(story.name,"ventrocluist");
    strcpy(story.author,"mashdul houe");
    story.price = 343.343;

    // story.name = "tomok"; // it dose not work

    // book list : 
    book book_list[2] = {tin_guyenda,story};

    for(int i = 0; i < 2; i++){
        print_details(book_list[i]);
    }

    return 0;
}

void print_details(book b){
    cout <<"\n> Book Details <" << endl;
    cout << "Name : " << b.name << endl;
    cout << "Author : " << b.author << endl;
    cout << "Price : " << b.price << endl;
}