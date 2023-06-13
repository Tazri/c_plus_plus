Part 1: Tokens, Keywords, Basic Data Type
=========================================
Here documented about : 
- **[Tokens](#tokens)**
- **[Keywords](#keywords)**
- **[Identifiers](#identifiers)**
- **[Basic Data Types](#basic-data-types)**
- **[void](#void)**
- **[Structure and Union](#structure-and-union)**
- **[Enumerated Data Type](#enumerated-data-type)**

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

> ⚪ classes important type data type in c++ but it not cover this chapter.

<hr />

## Enumerated Data Type

The `enum` keyword automatically enumerates a list of words by assigning them values 0,1,2 and so on like ANSI C. But In c++ something is different. It possible to **create enum type variable without using `enum` keyword in c++**. Here syntax : 

```cpp
// the value will be assign automatically follwing this serail
// this serial    1      2     3      4 so on
enum enum_name{name1, name2, name3,...};

// enum with custom value
enum enum_name{name1=value1,name2=value2,name3=value3};

// enum only store int type data
// if determine the value of only one property of enum then left of enum value 
// will assigin increamentin from which are determined Here simple example :  
enum enum{name1=value1,name2,name3=vlaue3,name4};

// name2 = value1 + 1
// name4 = value3 + 1
// enum allow duplicate value.

```

creating enum object in c++ like in c. But difference is dose not necessary to use `enum` keyword.

```cpp
enum enum_name variable_name = enum_value;

enum_name variable_name = enum_value; // dose not work in c
```

Another difference is that we can not assign int type value in enum type variable without casting in c++.
```cpp
enum enum_name a = enum_value; // error in c++
enum enum_name a = (enum_name) enum_value; // casting is necessary in c++
```

c++ allow to create anonymous enum. Which has no name. Example : 
```cpp
enum {ON=1,OFF=0};
```

A big example of Enum :
```cpp
#include <iostream>

using namespace std;

// create enum
enum color {red,green,blue,black};

// create enum with integer value explacitly
enum letter{a,b,c,d=1,e,f};

// anonymous enum
enum {on=1,off=0};

int main(void){
    // creating
    enum letter name_start = e;

    color my_book = blue; // did not necessary to use enum keyword in c++
    
    int is_down = off;

    // error in c++, dose not store in type data without casting to enum type variable
    // color mouse_color = 3;  

    // castin is necessary
    color mouse_color = (color) 30; 

    cout << "name_start : " << name_start << endl; // name_start : 2
    cout << "my_book : " << my_book << endl; // my_book : 2
    cout << "is_down : " << is_down << endl; // is_down : 0
    cout << "mouse_color : " << mouse_color << endl; // mouse_color : 30

    return 0;
}

/*
Ouptut : 
name_start : 2
my_book : 2
is_down : 0
mouse_color : 30
*/
```

<hr />

[< Index](./../token_expressions_and_control_structors.md) | [README](./../../README.md) | [Part 2 >](./../part_2/part_2.md)
------------------------------------
<br />
<br />

[OR Go README Of Note 2 >](./../../README.md)
-------------------------------------