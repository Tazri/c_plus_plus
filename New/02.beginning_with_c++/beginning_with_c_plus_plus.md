Beginning  With C++
===================

This chapter has : 
1. Some important information about c++

<hr />

## What is C++ 
- C++ is an Object Oriented Programming language.
- It is developed by `Bjarne Stroustrup` at AT&T Bell Laboratories.
- He combine the C and Simula67 feature for develped the C++ language. 
- The first name of C++ is `C With Classes`.

## Basic Program Example 
Here basic program example in C++ : 

```cpp
#include <iostream>

using namespace std; // use the std namespace

int main(){
    // this is single line comment

    cout << "Hello, World!" << endl;
    
    /*
        This is multiline coumment
    */

    return 0;
}
```

The by default data type of main function is int. But write data type is good practice 🙂.

```cpp
#include <iostream>


using namespace std;

// main function assume that the function will return int type data
main(){
    cout << "Hello, main ! without int datatype and return type" << endl;


    /*
        if dose not return anything here then c++
        compiler return 0 by default.
    */
}

/*
// compiler can not assume for other
add(int a, int b){

}
*/

```

## Input output

Here some basic object use for input or output : 

| Object | Description |
|--------|-------------|
| cout   | use for output the data |
| cin    | input the data. when enter space it stop to input data |
| endl   | print '\n' end the last |

It can possible to use cout multiple time. Example : 

```cpp 
cout << "Thi is string " << 3 + 3 << " end" << endl;

/*
here double left angle bracket called insertion operator.
*/
```

**cin** use for input data from user : 
```cpp 
int n;
cin >> n;

/*
Here double right angle bracket called extraction operator.
*/
```

## Average Two Number 
Here the program which can take two float input from user and show average : 

```cpp
#include <iostream>

using namespace std;

int main(void){
    float number_one, number_two, result;
    
    // input from user
    cout << "Enter first number : ";
    cin >> number_one;
    cout << "Enter sceond number : ";
    cin >> number_two;

    result = ( number_one + number_two ) / 2;

    cout << "The Result : " << result << endl;

    return 0;
}
```

## How to compile the Source file : 

Here command for g++ compiler to compile the source file : 

```shell 
$ g++ file_name_with_path_&_extention
```
In that case the output file name by default a.out. 

Compile with define the output file name : 

```shell 
$ g++ file_name_with_path_&_extention -o outputfile_name_with_destination
```

We also compile source file by gcc compile using by **-lstdc++** flag. Here command : 
```shell 
$ gcc file_name_with_path_&_extention -lstdc++
```
or 

```shell 
$ g++ file_name_with_path_&_extention -lstdc++ -o outputfile_name_with_destination
```

To see assembly code by g++ then use **-S** flag for that :  
```shell
$ g++ -S file_name_with_path_&_extention 
```

<hr />

