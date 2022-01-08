![github](./asset/badge/github.svg) ![cpp-object-oriented-programming](./asset/badge/cpp-object-oriented-programming.svg)
![cpp-documentation](./asset/badge/cpp-documentation.svg)

# C++ Programming Language

This is simple documentation on c++ programming language for me. I create this documentation on my way and I also use g++ compiler for learn c++. Also I can not write whole basic document in here. Because I already learn them in c.Just I write basic thing which is different from c.

![object oriented programing](./asset/banner/cpp-object-oriented-programming.png)

## Table of Content

- [Basic](#Basic)
  - [Basic Builtin Function](#Basic-Builtin-Function)
  - [Commenting](#Commenting)
  - [Type Casting](#Type_Casting)
  - [Function and C++](#Function_and_C++)
    - [Default_Arguments](#Default_Arguments)
    - [Function Perameter Pointer Refercence](#Function_Perameter_Pointer_Refercence)
  - [Void Pointer](##Void_Pointer)
  - [Structure Union and Enum](##Structure_Union_and_Enum)
  - [References](#References)
    - [Const References](#Const_References)
    - [Reference as Return](#Reference_as_Return)

# Basic

See basic program on c.

**_Program: print_hello_world :_**

```cpp
#include <iostream>
using namespace std;

int main(void){
    cout << "Hello, World!" << endl;

    return 0;
}
```

**_Output :_**

```
Hello, World!
```

**_Another Program: print_Hey_Universe :_**

```cpp
#include <iostream>
using namespace std;

int main(void){
    cout << "Hey, Universe!\n";
    return 0;
}
```

**_Output :_**

```
Hey, Universe!
```

This is the basic c++ program structure. C++ is the super set of c programming language. So in that case all syntax in c work in c++ well allmost all. C++ also case sensitive langauge.

## Basic-Builtin-Function

Some basic built in function on c++;

| Function | Work           |
| -------- | -------------- |
| cout     | see the output |
| cin      | take the input |
| endl     | get line break |

### cout

cout full form is **character output.**

**_Program : cout_**

```cpp
#include <iostream>
using namespace std;

int main(void){
    cout << "Hey, Universe!\n"; // show output
    return 0;
}
```

**_Program : cin_**
cin full form **character intput.**

```cpp
#include <iostream>

using namespace std;

int main(void){
    int number;

    cin >> number; // get the number

    cout << "Number is " << number << "\n";
    return 0;
}
```

**_Output :_**

```
45
Number is 45
```

### endl

endl full form is **end line.**

**_Program : endl_**

```cpp
#include <iostream>
using namespace  std;

int main(void){
    cout << "Hello, World!" << endl; // take line break here
    return 0;
}
```

## Commenting

Commenting in c++ like in c.

**_Program : comment_**

```cpp
# include <iostream>

using namespace std;

int main(void){
    // this is single ine of comment

    /**
     * This is multiline of comment
     *
     * */

    return 0;
}
```

## Type_Casting

Type casting in c++ like in c. But can typecasting another way.

**_Program : typecasting_**

```cpp
#include <iostream>

using namespace std;

int main(void){
    int x,y;
    x = 20;
    y = 20;

    // type cating way in c
    double double_x = (double) x + 0.32;
    double double_y = double(y) + 0.32;

    // print the double_x and double_y
    cout << "double_x = " << double_x << endl;
    cout << "double_y = " << double_y << endl;
    return 0;
}
```

**_Output : typecasting_**

```
double_x = 20.32
double_y = 20.32
```

## Function_and_C++

In c++ funciton like in c. But in c++ function have extra feature.

### Default_Arguments

We can set default argument in c++ funciton.

**_Program : Default Arguments_**

```cpp
#include <iostream>

using namespace std;

// function prototype
void print_value(
    int x = 55, /* default value */
    int y = 99 /* default value */
    );
/**
 * default value must declear in
 * function prototype
 *
 * */

int main(void){
    print_value(30,40);
    print_value();
    return 0;
}

// print_value function
void print_value(int x,int y){
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "\n" << endl;
}
```

**_Output : Default Arguments_**

```
x = 30
y = 40


x = 55
y = 99



```

### Function_Perameter_Pointer_Refercence

We can use pointing refercening in function perameter in c++.

**_Program : perameter pointer reference_**

```cpp
#include <iostream>

using namespace std;

// function prototype
void swap_value(int &,int &);

int main(void){
    int x,y;
    x = 30;
    y = 100;

    cout << "Before Swaping" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    swap_value(x,y);
    cout << "After Swaping" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}

// swap_value function
void swap_value(int &x,int &y){
    int temp = y;
    y = x;
    x = temp;
}
```

**_Output : perameter pointer reference_**

```
Before Swaping
x = 30
y = 100
After Swaping
x = 100
y = 30
```

## Void_Pointer

C++ can not set pointer variable value directly.

**_Porgram : void_pointer_**

```cpp
#include <iostream>

using namespace std;

int main(void){
    void *ptr_void;
    int *ptr_int;
    int x = 20;
    ptr_void = &x;

    // we can not do that in c++
    // ptr_int = ptr_void;

    // instead do that
    ptr_int = (int *) ptr_void;

    cout << "*ptr_int = " << *ptr_int << endl;


    return 0;
}
```

**_Output : void_pointer_**

```
*ptr_int = 20
```

## Structure_Union_and_Enum

we can use structure, union and enum like in c.But extra benifit is declear a theis type of variable without using theis keyword.

**_Program : Structure_Union_and Enum_**

```cpp
#include <iostream>

using namespace std;

// create custom datatype
enum Day {
    fri,sat,sun,mon,tue,wed,thu
};

struct Create_Date{
    int year;
    int month;
    Day day;
};

union Day_Cost{
    int eid_day;
    int eid_cost;
};

int main(void){
    Create_Date to_day;
    to_day.year = 2022;
    to_day.month = 1;
    to_day.day = sat;

    Day_Cost last_eid;
    last_eid.eid_cost = 300;

    cout << "Today = " << to_day.year << "/" << to_day.month << "/" << to_day.day << endl;
    cout << "last Eid Cost = " << last_eid.eid_cost << endl;

    return 0;
}
```

**_Output : structure union and enum_**

```
Today = 2022/1/1
last Eid Cost = 300
```

## References

This is the different feature in c++ from c. It is one kind of variable which act like a normal and pointer variable

**_Rule of declear references :_**

```
data_type& reference_name = variable_of_data_type
```

**_Program : References_**

```cpp
#include <iostream>

using namespace std;

int main(void){
    int x = 90;

    // declear reference
    int &r_x = x;

    cout << "r_x = " << r_x << endl;

    cout << "After change value by refercence" << endl;
    r_x = 300;
    cout << "x = " << x << endl;
    return 0;
}
```

**_Output : References_**

```
r_x = 90
After change value by refercence
x = 300
```

### Const_References

we can use const reference in c++.

**_Program : const references_**

```cpp
#include <iostream>

using namespace std;

int main(void){
    int x = 30;

    // declear const reference
    const int & cr_x = x;

    // can not do that
    // cr_x = 33;

    // but we can change x value by x
    cout << "cr_x = " << cr_x << endl;
    cout << "changing value by x" << endl;
    x = 0;
    cout << "cr_x = " << cr_x << endl;

    return 0;
}
```

**_Output : const references_**

```
cr_x = 30
changing value by x
cr_x = 0
```

### Reference_as_Return

we can use reference as return type of function.

**_Program : reference as return_**

```cpp
#include <iostream>

using namespace std;

int x = 20;

// function prototype
int & return_r(void){
    return x;
}

int main(void){
    cout << "x Before Change" << endl;
    cout << "x = " << x << endl;

    return_r() = 403;

    cout << "after change" << endl;
    cout << "x = " << x << endl;
    return 0;
}
```

**_Output : reference as return_**

```
x Before Change
x = 20
after change
x = 403
```
