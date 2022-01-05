![github](./asset/badge/github.svg) ![cpp-object-oriented-programming](./asset/badge/cpp-object-oriented-programming.svg)
![cpp-documentation](./asset/badge/cpp-documentation.svg)

# C++ Programming Language

This is simple documentation on c++ programming language for me. I create this documentation on my way and I also use g++ compiler for learn c++. Also I can not write whole basic document in here. Because I already learn them in c.Just I write basic thing which is different from c.

## Table of Content

- [Basic](#Basic)
  - [Basic Builtin Function](#Basic-Builtin-Function)
  - [Commenting](#Commenting)

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

```c
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
