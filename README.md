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
- [Classes](#Classes)
  - [Object](##Object)
  - [Member Variable](##member_variable)
  - [Member Function](##member_function)
  - [Access Specfier](##access_specfier)
    - [public](###public)
    - [private](###private)
  - [Constructor](##Constructor)
  - [Destructor](##Destructor)
  - [Static Member](##Static_Member)
  - [Static Member Function](##Static_Member_function)
  - [Friend](##Friend)

# Basic

Let see basic program on c.

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

# Classes

In c++ class call core of c++.Class Create Object.Object is instance of class.

**_Basic Class Structure :_**

```
class <class_name>{
    private :
        private_member_variable(s);
        private_member_function(s)();
    public :
        public_member_variable(s);
        public_member_functions(s)();
    protected :
        protected_member_variable(s);
        protected_meber_function(s)();
}
```

**_Program : example class_**

```cpp
#include <iostream>
#include <string.h>

using namespace std;

// create class
class Person{
    private :
    int height;
    int age;

    public :
    Person(char _name[],int _age,int _height){
        strcpy(name,_name);
        age = _age;
        height = _height;
    }
    char name[30];
    int get_height(void){
        return height;
    }
    int get_age(void){
        return age;
    }
    void set_age_and_height(int _age,int _height){
        age = _age;
        height = _height;
    }

};

int main(void){
    Person tazri("Md Tazri",17,5.1);

    cout << ">>> Print Details About Tazri <<<" << endl;
    cout << "Name   : " << tazri.name << endl;
    cout << "Age    : " << tazri.get_age() << endl;
    cout << "Height : " << tazri.get_height() << endl;

    return 0;
}
```

**_Output : example class_**

```
>>> Print Details About Tazri <<<
Name   : Md Tazri
Age    : 17
Height : 5
```

## Object

Object create by class. It one kind of physical representation.

**_Create Object :_**

```
Class_Name <object_name>(construction,parameter);
```

## Member_variable

Any kind of data mean object attributes can store in member variable in class. Any kind of built-in datatype variable like array, pointer, structure, enum even class can store as a member variable.

**_Member Variable :_**

```
class class_name{
    private :
        private_member_variable;

    protected :
        protected_member_variable;

    public :
        public_member_variable;

}
```

**_Program : Member Variable _**

```cpp
#include <iostream>

using namespace std;

// simple class
class Person{
    public :
        int age,roll,height;
};

int main(void){
    Person tazri;

    // print tazri object before define variable
    cout << ">>> Before Define Value <<<" << endl;
    cout << "Age : " << tazri.age << endl;
    cout << "Roll : " << tazri.roll << endl;
    cout << "Height : " << tazri.height << endl;

    tazri.age = 17;
    tazri.roll = 35;
    tazri.height = 5.1;

    // print tazri object after define value
    cout << ">>> After Define Value <<<" << endl;
    cout << "Age : " << tazri.age << endl;
    cout << "Roll : " << tazri.roll << endl;
    cout << "Height : " << tazri.height << endl;

    return 0;
}
```

**_Output : member variable_**

```
>>> Before Define Value <<<
Age : 32765
Roll : 0
Height : 0
>>> After Define Value <<<
Age : 17
Roll : 35
Height : 5
```

## Member Function

Member function is behavior of object. Example of Member function.

```
class class_name{
    private :
        private_member_function();
    protected :
        protected_member_function();
    public :
        public_member_function();
}
```

**_We can write defination of member function in two way._**

- inside the class which call inline function.
- outside the class.

**_Define inline function rule_**

```
class class_name{
    public :
    data_type function_name(perameter_list){
        defination of the funciton........
    }
}
```

**_Define member function outside the class_**

```
class class_name{
    public :
    return_data_type function_name(perameter_list);
}

// write defination function outside the class
return_data_type class_name::member_funciton_name(perameter_list){
    function defination.....................
}
```

**_Program : member function_**

```cpp
#include <iostream>

using namespace std;

// create simple class
class Person{
    private :
    int age,roll,height,weight;
    public :
    int get_age(void){ // inline function
        return age;
    };
    void set_age(int _age);
};

// define set_age function outside the class
void Person::set_age(int _age){
    age = _age;
}

int main(void){
    // create object
    Person tazri;

    tazri.set_age(17);
    cout << "Age : " << tazri.get_age() << endl;
    return 0;
}
```

**_Output : member function_**

```
function
Age : 17
```

**_More Important thing about member function_**

- Inline function is little more faster then outside function defination. But it consume the storage.

- Outside defination function is slower then inline function but it save the storage.

- :: it call scope resolution operator.
- we can call member function inside the another member function in same class without . operator.

## Access_Spacfier

Access spacfier define which variable can use outside the class. Two access apacifier is :

- Public (keyword's public)
- Private (keyword's private)

### Pubilc

If declear memeber inside the public that can access outside the function.

**_Declear a member inside the public :_**

```cpp
class name{
    public : // access spacfier keyword's
        int member_variable; // memeber variable
        int memeber_function; // memeber function
}
```

**_Program : public_**

```cpp
#include <iostream>

using namespace std;

// create class
class Person{
    public :
        int age,height,weight;
    public :
        int account;
        void show_info(void){
            cout << ">>> Details <<<" << endl;
            cout << "> Age : " << age << endl;
            cout << "> Height : " << height << endl;
            cout << "> Weight : " << weight << endl;
        }
};

int main(void){
    // create object
    Person tazri;

    // access the member function
    tazri.age = 17;
    tazri.height = 5;
    tazri.weight = 45;
    tazri.account = 0;

    // access the public function
    tazri.show_info();
    cout << "> Balance : " << tazri.account << endl;

    return 0;
}
```

**_Output : public_**

```
>>> Details <<<
> Age : 17
> Height : 5
> Weight : 45
> Balance : 0
```

We can use public keyword mulitiple time inside the class as well.

### private

Private spacfier is define that memeber variable can not use outside the function.

**_Declear private memeber_**

```cpp
class class_name{
    int private_memeber;
    int private_function();

    private :
        int private_memeber;
        int private_function();
}
```

If you declear function or variable inside the class without any access spacfier keyword then comiplear take this as a private member.

**_Program : private_**

```cpp
#include <iostream>

using namespace std;

// create class
class Person{
    // creating private memeber without private keyword
    int age;
    void print_hello(void);

    // creating private memeber with private keyword
    private :
        int height;

    public :
        void set_age_height(int,int);
        void print_details(void);

};

// print_hello function
void Person::print_hello(void){
    cout << "Hello, World!" << endl;
}

// set_age_height funciton
void Person::set_age_height(int _age,int _height){
    age = _age;
    height = _height;
}

// print_details function
void Person::print_details(void){
    cout << ">>> Details <<<" << endl;
    cout << "> Age : " << age << endl;
    cout << "> Height : " << height << endl;
    print_hello();
}

int main(void){
    // create person
    Person p_one;
    p_one.set_age_height(17,5);

    // this line will get error
    // p_one.print_hello();

    p_one.print_details();

    return 0;
}
```

**_Output : private_**

```
>>> Details <<<
> Age : 17
> Height : 5
Hello, World!
```

Private member only can use inside the public member function.

## Constructor

Constructor is default class function which added by compiler. It called when object is create.

**_Rule for declear constructor function_**

1. It declear must be inside public. Because it called outside the class.
1. The constructor function name must be same with class name.
1. Constructor function can not return anything.

**_Declear constructor function_**

```
class Class_Name{
    public :
        Class_Name(perameter_list){
            function defination
            -------------------
            -------------------
        }
};
```

**_Ohter way to declear constructor function_**

```
class Class_Name{
    public :
        Class_Name(peramter_list); // prototype
}

Class_Name::Class_Name(peramer_list){
    function defination
    -------------------
    -------------------
}
```

**_Program : constructor_**

```cpp
#include <iostream>

using namespace std;

// one way to declear constructor
// class Pointer{
//     int x,y;
//     public :
//         Pointer(int _x,int _y){
//             x = _x;
//             y = _y;
//         };

//         void print(void){
//             cout << ">>> Poitner <<<" << endl;
//             cout << "> x : " << x << endl;
//             cout << "> y : " << y << endl;
//         }
// };

// another way to declear constructor
class Pointer{
    int x,y;

    public :
        Pointer(int,int);
        void print(void);
};

// constructor function
Pointer::Pointer(int _x,int _y){
    x = _x;
    y = _y;
}

// print function
void Pointer::print(void){
    cout << ">>> Pointer Details <<<" << endl;
    cout << "> x : " << x << endl;
    cout << "> y : " << y << endl;
}

// main function
int main(void){
    // create pointer
    Pointer position(45,78);
    position.print();
    return 0;
}
```

**_Output : constructor_**

```
>>> Pointer Details <<<
> x : 45
> y : 78
```

## Destructor

Destructor is another default function of class which added by comipler by default. It called when the object is erase in storage.

**_Rule to declear Destructor_**

1. Destructor function name must be same with class name starting with ~ symbol
1. It's must declear inside the public.
1. It's can not reaturn anything and it can not get any perameter.

**_Declear Destructor_**

```
class Class_Name{
    public :
        ~Class_Name(){
            /**
            * This is destructor function
            * defination.
            *
            */
        };
};

// another way to declear destructor
Class_Name::~Class_Name(){
    /**
    * This is destructor function
    * defination
    *
    */
}
```

**_Program : Destructor_**

```cpp
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
```

**_Output : destructor_**

```
Object was created
Object was Deleted
```

## Static_Member

Static member is one kind of variable wich address share by every object. Every object can access it. Static member can be private or public.

**_Creating Static Member_**

```cpp
class Name{
    // declear private static member
    static data_type x,y;

    public :
        // declear public static member
        static int p,z;
};

// define the static memeber
data_type Name::x;
data_type Name::y;
data_type Name::p;
data_type Name::z;

```

**_Program : Static Member_**

```cpp
#include <iostream>

using namespace std;

// create class
class Pointer{
    // create private member
    int x,y;
    // create static variable
    static int total_point;

    // create public member
    public :
        Pointer(int _x = 0,int _y = 0);
        ~Pointer(void);
        void print_total_point(void);
        void set_pointer(int,int);
        void print(void);

};

// define static member
int Pointer::total_point = 0;

// define constructor
Pointer::Pointer(int _x,int _y){
    Pointer::x = _x;
    Pointer::y = _y;
    Pointer::total_point++;
}

// define destructor
Pointer::~Pointer(){
    Pointer::total_point--;
}

void Pointer::print_total_point(void){
    cout << "Total Point : " << total_point << endl;
}

void Pointer::set_pointer(int _x,int _y){
    Pointer::x = _x;
    Pointer::y = _y;
}

void Pointer::print(void){
    cout << ">>> Detail <<<" << endl;
    cout << "X : " << x << endl;
    cout << "Y : " << y << endl;
}

int main(void){
    // create 5 pointer
    Pointer p_one,p_two,p_three,p_four,p_five;

    p_one.print_total_point();
}
```

**_Output :_**

```
Total Point : 5
```

## Static_Member_Function

It look like static member variable. Different is it is function which can access every object of same class. But we can call this function with scope resolution operator. Same thing we do with static variable.

**_Creating static member function_**

```cpp
class  name{
    public :
        static int number;
        static void print_number(void){
            --------------------------
            function defination
        }
}
```

**_Program : static member function_**

```
#include <iostream>

using namespace std;

// creating class
class Sample{
    public :
        static int number;

        // define static function member
        static void print_number(void);
        static void hello(void){
            cout << "Hello, World!" << endl;
        }
};

// define static variable member
int Sample::number;

// define static function member
void Sample::print_number(void){
    cout << "Number : " << number << endl;
}


int main(void){
    Sample::number = 300;
    Sample::hello();
    Sample::print_number();
}
```

**_Output : static member function_**

```
Hello, World!
Number : 300
```

## Friend

Friend this concept in c++ use for to give permission the member function to use another class private member.

**_Use the member function_**

```c++
class Class_A{
    int a,b;
    public :
        friend class Class_B;
}

// another way
// forward reference
class Class_B;

class Class_A{
    int a,b;
    public :
     friend Class_B;
}
```

Now here Class_B's memeber function's can use Class_A's private memeber. Let's going to see example:

**_Program : friend_**

```cpp
#include <iostream>

using namespace std;

// creating class

// class_A class
class Class_A{
    int a,b;
    public :
        Class_A(int _a = 0,int _b = 0);
        friend class Class_B;
};

// Class_A constructor
Class_A::Class_A(int _a,int _b){
    a = _a;
    b = _b;
}

// Class_B class
class Class_B{
    public :
        void show_value(Class_A & _a);
};

// show_value
void Class_B::show_value(Class_A & _a){
    cout << ">>> Details <<<" << endl;
    cout << "A : " << _a.a << endl;
    cout << "B : " << _a.b << endl;
}

int main(void){
    // create a_object
    Class_A a_object(30,50);
    Class_B b_object;

    b_object.show_value(a_object);
    return 0;
}
```

**_Output : friend_**

```
>>> Details <<<
A : 30
B : 50
```

But we can do it another way. Forward referencing way :

**_Program : friend forward referencing_**

```cpp
#include <iostream>

using namespace std;

// creating class

// // Class_A class
// class Class_A{
//     int a,b;
//     public :
//         Class_A(int _a = 0,int _b = 0);
//         friend class Class_B;
// };

// forward referencing
class Class_B;

// Class_A class
class Class_A{
    int a,b;
    public :
        Class_A(int _a= 0,int _b = 0);
        friend Class_B;
};

// Class_A constructor
Class_A::Class_A(int _a,int _b){
    a = _a;
    b = _b;
}

// Class_B class
class Class_B{
    public :
        void show_value(Class_A & _a);
};

// show_value
void Class_B::show_value(Class_A & _a){
    cout << ">>> Details <<<" << endl;
    cout << "A : " << _a.a << endl;
    cout << "B : " << _a.b << endl;
}

int main(void){
    // create a_object
    Class_A a_object(30,50);
    Class_B b_object;

    b_object.show_value(a_object);
    return 0;
}
```

**_Output : friend forward referencing_**

```
>>> Details <<<
A : 30
B : 50
```

It's work same. But in that case we don't need to use class keyword after friend keyword.In here B is friend A class.

**_One-Way Ticket_**

In here Class_B member function can use private member of Class_A. But Class_A can not use private member of Class_B.If in that case we must friend Class_A inside the Class_B. It call two way Ticket.

**_Program : two-way ticket_**

```cpp

```
