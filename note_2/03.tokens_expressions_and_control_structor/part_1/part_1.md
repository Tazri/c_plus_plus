Part 1: Tokens, Keywords, Basic Data Type
=========================================
Here documented about : 
- **[Tokens](#tokens)**
- **[Keywords](#keywords)**
- **[Identifiers](#identifiers)**
- **[Basic Data Types](#basic-data-types)**
- **[void](#void)**
- **[Structure and Union](#structure-and-union)**

## Tokens
The smallest indiviual units in a program are known as tokens. In C++ has following tokens : 
- Keywords
- Identifiers
- Constants
- Strings
- Operatos 

## Keywords
The keywords implement specific C++ language features. They are explicitly reserved indentifiers and cannot be used as names for the program variables or other user-defined program elements. ANSi C++ standards committee has added some more keywords to make the language more versatile.

## Identifiers
The following rules are common to both C and C++ for naming indentifiers :
- Only alphabetic characters, digits and underscores are permitted.
- The name can not start with digit.
- Uppercase and Lowercase letters are distinct.
- A declared keyword cannot used as a variable name.

> Identifiers refer to the name of variables, functions, arrays, classes, etc created by the programmer.

## Basic Data Types 
It possible to divide C++ data type into 3 categories. Here : 

1. User-defined type.
2. Built-in type.
3. Derived type.

**User-defined type :** 
1. Structure. (keyword struct)
2. Union. (keyword union)
3. class. (keyword class)
4. enumeration. (keyword enum)

**Built-in Type :**
1. Integral type. (int,char)
2. Void. (void)
3. Floating type. (float, double)

**Derived type :**
1. Array.
2. Function. 
3. Pointer.
4. Reference.

> 🔴 ANSi C++ committee has added two more data type, `bool` and `wchar_t`.

## void 
- `void` are to specify the return type of a function when it is not returning any value.
- Also `void` use to indicate an empty argument list to a function.
- Another use of `void` is declear a generic pointer.

Here example of void funciton : 
```cpp
void void_function(void);
```

Here example of generic pointer : 
```cpp 
#include<iostream>

using namespace std;

int main(void){
    void *generic_pointer;
    int number = 30;
    int *number_pointer = &number;
    int *np;

    // store number_pointer into generic_pointer
    generic_pointer = number_pointer;

    // store generic_pointer into np pointer.
    // np = generic_pointer; // it allow only c
    np = (int *) generic_pointer; // in c++ rule.

    // berofe access the generic_pointer must be convert it explicit
    cout <<"*number_pointer : " << *number_pointer << endl;
    cout << "*generic_pointer :" <<   *(int *)generic_pointer << endl;
    cout << "*np :" << *np <<endl;

    cout << endl << "> Printing Address <" << endl;
    cout << "&number : " << &number << endl;
    cout << "number_pointer : " << number_pointer << endl;
    cout << "np : " << np << endl;
    cout << "generic_pointer : " << generic_pointer << endl;
    return 0;
}
```



> 🔴 Assigning any pointer type to a void pointer without using a cast is allowed in both C++ and ANSI C. In ANSI C, we can also assign a void pointer  to a not-void pointer without using a cast to non-void pointer type. This is not allowed in C++.

## Structure and Union
The general fomat of a structure definition is as follows : 

```cpp 
struct name {
    data_type member_one;
    data_tyep member_two;
    .....................
    .....................
};
```

Syntax to declear a struct : 

```cpp
struct struct_type struct_name;

struct_type struct_name; // work only C++
```

Here the big example of structure : 

```cpp
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
```

Rule of declare and define structure and union are same. Here syntax : 
```cpp
// define
union union_name{
    data_type name;
    data_type name;
    data_type name;
}

// declare
union union_name name;
union_name name; // work only in C++
```

> 🔵 The size of a structure type is equal to the sum of the sizes of individual member types. However, the size of a union is equal to the size of its largest member element.

<hr />

[< Index](./../token_expressions_and_control_structors.md) | [README](./../../README.md) | [Part 2 >](./../part_2/part_2.md)
------------------------------------