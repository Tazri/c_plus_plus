Object
======

Here table of content : 

- **[Basic Object](#basic-object)**
- **[Copy Object](#copy-object)**
- **[Copy constructor](#copy-constructor)**
- **[Object and Function](#object-and-function)**
- **[Call by Reference](#call-by-reference)**
- **[Object Array](#object-array)**


<hr />
<br />

## Basic Object 

In c++ class type variable called object. Let's see the example :

```cpp
class_name object_name;
```

### Rule of decleare object;

```cpp
class_name object_name;

// perameterized object case
class_name object_name(argument_list);
```

### Accessing member variable

```cpp
object_name.member_variable;

// change member variable
object_name.member_variable = value;

// calling member function
object_name.member_function();
```

<hr />
<br />

## Copy Object

Here we can copy object by just = operator. Syntax :

```cpp
object_one = oject_two;
```

**_Program : copy object_**

```cpp
#include <iostream>

using namespace std;

// create class
class Position{
    int x,y,id;

    public :
        static int total;
        Position(int _x = 0,int _y = 0);
        ~Position(void);
        void change_position(int _x = 0,int _y = 0);
        void show_position(void);

};

int Position::total = 0;

// constructor
Position::Position(int _x,int _y){
    x = _x;
    y = _y;
    id = total++;
}

// destructor
Position::~Position(void){
    total--;
}

// Position::show_position
void Position::show_position(void){
    cout << ">>> Position Detailts " << id << " <<<" <<endl;
    cout << "> x : " << x << endl;
    cout << "> y : " << y << endl;
    cout << ">>> Finish Details <<<\n\n" << endl;
}

// Position::change_position
void Position::change_position(int _x,int _y){
    x = _x;
    y = _y;
}

int main(void){
    Position me(33,55);
    Position other;
    other = me;

    cout << ">>> Before Changing Value <<<" << endl;
    me.show_position();
    other.show_position();

    cout << ">>> After Changing Value <<<" << endl;
    me.change_position(1,1);
    me.show_position();
    other.show_position();

    return 0;
}
```

**_Output : copy object_**

```
>>> Before Changing Value <<<
>>> Position Detailts 0 <<<
> x : 33
> y : 55
>>> Finish Details <<<


>>> Position Detailts 0 <<<
> x : 33
> y : 55
>>> Finish Details <<<


>>> After Changing Value <<<
>>> Position Detailts 0 <<<
> x : 1
> y : 1
>>> Finish Details <<<


>>> Position Detailts 0 <<<
> x : 33
> y : 55
>>> Finish Details <<<

```

In here we see that after copy the object the value are different from each other. Here what happen after copy the object from other to another :

1. Two object must be in same class
1. If Both object class type is different in that case it can not copy
1. Compiler copy them by bitwise. So there is not releation each other after copy.
1. But object exist pointer variable in that case create a releation.

So see the example if object have pointer member and copy that.

**_Program : copy pointer member_**

```cpp
#include <iostream>
#include <string.h>

using namespace std;

// create class
class Person{
    char *name;
    int age;

    public :
        static int total_person;
        Person(char *_name,int age);
        ~Person(void);
        void show_person(void);
        void change_name(char *_name);
};

int Person::total_person = 0;

// constructor
Person::Person(char *_name,int _age){
    name = new char[40];
    strcpy(name,_name);
    age = _age;
    total_person++;
}

// destructor
Person::~Person(void){
    total_person--;
}

// show_person
void Person::show_person(void){
    cout << "Person : " << total_person << endl;
    cout << "name : " << name << endl;
    cout << "age : " << age << endl;
    cout << "\n";
}

// change_name
void Person::change_name(char *_name){
    strcpy(name,_name);
}

int main(void){
    Person me("Md Tazri",17);
    Person other("Focasa",20);

    cout << ">>> Before copy and changing <<<" << endl;
    me.show_person();
    other.show_person();

    cout << "\n>>> After copy and changing <<<" << endl;
    other = me;
    me.change_name("Troy");
    me.show_person();
    other.show_person();
    return 0;
}
```

**_Output : copy pointer member_**

```
>>> Before copy and changing <<<
Person : 2
name : Md Tazri
age : 17

Person : 2
name : Focasa
age : 20


>>> After copy and changing <<<
Person : 2
name : Troy
age : 17

Person : 2
name : Troy
age : 17

```

<hr />
<br />

## Copy Constructor

In that case we can use copy constructor. copy constructor is another constructor default class function which call when copy the object. Here syntax of copy constructor :

```cpp
Class_Name(Class_Name &);

// defination of copy constructor
Class_Nmae::Class_Name(class_name& object_name){
    // defination here
}
```

**_Program : copy constructor_**

```cpp
#include<iostream>
#include<string.h>

using namespace std;

// create human class
class Human{
    public :
        // member
        char *name;


        // member function
        Human(char *_name);
        Human(Human &_dist);
        void show(void){
            cout << "Name : " << name << endl;
        }

};

// constructor
Human::Human(char *_name){
    name = new char[40];
    strcpy(name,_name);
}

// copy constructor
Human::Human(Human &_dist){
    strcpy(name,_dist.name);
}

int main(void){
    // create human
    Human me("Tazri");
    Human other = me;

    cout << ">>> Before changing " << endl;
    me.show();
    other.show();

    cout << ">>> After changing " << endl;
    strcpy(me.name,"Solus");
    me.show();
    other.show();

    cout << ">>> After again changing " << endl;
    strcpy(other.name,"Troy");
    me.show();
    other.show();
}
```

**_Output : copy constructor_**

```
>>> Before changing
Name : Tazri
Name : Tazri
>>> After changing
Name : Solus
Name : Tazri
>>> After again changing
Name : Solus
Name : Troy
```
<hr />
<br />

## Object and Function

Object can use every where example like :

1. function inside.
2. function arguments.
3. function return.

### Function inside

If we create object inside the function and close the function then the destructor will called. In that case it call last object destructor first then secound last then go on. Example like :

**_Program : object inside the function_**

```cpp
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
```

**_Output : object inside the function_**

```
This is block a
This is block b
This is block c
>>> Finish Function Here <<<
Block c Deleted
Block b Deleted
Block a Deleted
```

### function arguments

We can pass object as function arguments but here focus that if we pass object in arguments it call call by value. In that case pass the copy of object. In that case if we change something in inside function object then it can not change main function object but if class has pointer member in that case pointer member value is must change if we change value function inside value. One more thing, if we pass object as function arguments in that case can not call object constructor but end of function must called object destructor. See again point by point :

1. pass object in argument : pass copy of object call call by value.
1. pointer member value change if inside the function object then main function object pointer member value will change.
1. call by value object case can not call constructor.
1. call by value object case will call destructor end of function.

**_Program : call by value object_**

```cpp
#include <iostream>

using namespace std;

// create class
class Position{
    char mark;
    int x;
    int *y;

    public :
        Position(char _mark,int _x = 0,int _y = 0);
        ~Position();
        void show(void);
        void change(int _x,int _y);
};

Position::Position(char _mark,int _x,int _y){
    int d = _y;
    mark = _mark;
    x = _x;
    y =&d;
}

Position::~Position(){
    cout << "Deleted " << mark << endl;
}

void Position::show(void){
    cout << ">>> Point <<<" << endl;
    cout << "> x : " << x << endl;
    cout << "> *y : " << *y << endl;
    cout << "> mark : " << mark << endl;
    cout << ">>> Finish <<<" << endl;
}

void Position::change(int _x,int _y){
    x = _x;
    *y = _y;
}

// create simple function
void show_function(Position a){
    cout << "IN show function : " << endl;
    cout << "change y value to 1000 and x value 9000" << endl;
    a.change(9000,1000);
    a.show();
    cout << "finish function here." << endl;
}

int main(void){
    cout << "In Main Function : " << endl;
    // create position
    Position point('a',99,11);
    point.show();

    cout << "Pass the point in function : " << endl;
    show_function(point);

    cout << "point after finish function : " << endl;
    point.show();
}
```

**_Output : call by value object_**

```
In Main Function :
>>> Point <<<
> x : 99
> *y : 11
> mark : a
>>> Finish <<<
Pass the point in function :
IN show function :
change y value to 1000 and x value 9000
>>> Point <<<
> x : 9000
> *y : 1000
> mark : a
>>> Finish <<<
finish function here.
Deleted a
point after finish function :
>>> Point <<<
> x : 99
> *y : 32765
> mark : a
>>> Finish <<<
Deleted a
```

<hr />
<br />

## Call by Reference

we can pass the object address in function perameter. In that case it can not call destructor function end of the function.

Accessing object pointer :

```cpp
object_name->member_name
```

**_Program : call by reference object_**

```cpp
#include <iostream>

using namespace std;

// class
class Point{
    public :
        int x,y;
        char mark;
        // member function
        Point(char _mark,int _x = 0,int _y = 0);
        ~Point(void);
        void show(void);
};

Point::Point(char _mark,int _x, int _y){
    mark = _mark;
    x = _x;
    y = _y;
}

Point::~Point(void){
    cout << "Deleted Point " << mark << endl;
}

void Point::show(void){
    cout << ">>> Point " << mark << " <<<" << endl;
    cout << "> X " << x << endl;
    cout << "> Y " << y << endl << endl;
}

// sample function
void sample(Point *p){
    cout << "In Sampe function : ";
    p->show();
    p->x = 11;
    p->y = 22;
    cout << "change x to 11 and y to 22";
}

int main(void){
    Point point('a',7,8);
    sample(&point);
    point.show();
}
```

**_Output : call by reference object_**

```
In Sampe function : >>> Point a <<<
> X 7
> Y 8

change x to 11 and y to 22>>> Point a <<<
> X 11
> Y 22

Deleted Point a
```

### Return Object

**_Program : return object_**

```cpp
#include <iostream>

using namespace std;

// create point simple class
class Point{
    public :
        char mark;
        int x,y;

        // member function here
        Point(char _mark,int _x = 0, int _y = 0){
            mark = _mark;
            x = _x;
            y = _y;
        }
        ~Point(void){
            cout << "deleted : " << mark << endl;
        }
        void show(void){
            cout << "Point " << mark << endl;
            cout << "X : " << x << endl;
            cout << "Y : " << y << endl;
        }
};

// create_point
Point create_point(char _mark){
    // create point which is return
    Point d(_mark,22,11);
    return d;
}

int main(void){
    Point me = create_point('a');
    me.show();
    return 0;
}
```

**_Output : return object_**

```
Point a
X : 22
Y : 11
deleted : a
```

<hr />
<br />

## Object Array

we can create object array esaily. Here example :

**_Program : object of array_**

```cpp
#include <iostream>

using namespace std;

// class Point
class Point{
    char mark;
    int  x,y;

    public :
        Point(char _mark,int _x = 0,int _y = 0);
        ~Point(void);
        void show(void){
            cout << "Point(" << mark << ")";
            cout << " (" << x << ", " << y <<")" << endl;
        }
};

Point::Point(char _mark,int _x,int _y){
    mark = _mark;
    x = _x;
    y = _y;
}


Point::~Point(void){
    cout << "Deleted " << mark << endl;
}

// show point array
void show_point_array(Point point_arr[],int _len){
    for(int i = 0; i < _len;i++){
        point_arr[i].show();
    }
}

int main(void){
    // create point of array
    Point points[3] = {Point('a',2,3),Point('b',4,5),Point('c',6,2)};

    // shorcat if need one peramter in class
    Point null_points[3] = {'x','y','z'};

    cout << "point" << endl;
    show_point_array(points,3);

    cout << "\nnull point" << endl;
    show_point_array(null_points,3);
    return 0;
}
```

**_Output : object of array_**

```
point
Point(a) (2, 3)
Point(b) (4, 5)
Point(c) (6, 2)

null point
Point(x) (0, 0)
Point(y) (0, 0)
Point(z) (0, 0)
Deleted z
Deleted y
Deleted x
Deleted c
Deleted b
Deleted a
```

<hr />
<br />

## this_keyword

when create thie class the comipilter add this keyword as a class point in last perameter of none static member function and constructor.

Think about this example :

```cpp
class Point{
    int x,y;
    public :
        Point(int _x,int _y);
        void show(void);
};
```

compiler compile it like this :

```cpp
class Point{
    int x,y;
    public :
        Point(int _x,int _y,Point *this);
        void show(Point *);
}
```

Here full example :
**_Program : this_**

```cpp
# include <iostream>

using namespace std;

// create class
class Point{
    public :
        int x,y;
        Point(int _x = 0,int _y = 0){
            this->x = _x;
            this->y = _y;
        }
        void show_address(void){
            cout << "address &this->x " << &(this->x) << endl;
            cout << "address this " << this << endl;
        }
};



int main(void){
    Point x;

    x.show_address();
    cout << "address &x.x : " << &x.x << endl;
    cout << "address &x : " << &x << endl;
    return 0;
}
```

**_Output : this_**

```
address &this->x 0x7ffc39ca59a0
address this 0x7ffc39ca59a0
address &x.x : 0x7ffc39ca59a0
address &x : 0x7ffc39ca59a0
```

<hr />
<br />

[< OLD README](./../README.md)
--------------------