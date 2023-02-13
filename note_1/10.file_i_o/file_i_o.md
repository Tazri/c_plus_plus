File i/o 
=========

Table of Content : 
- **[Basic file i/o](#basic-file-io)**
- **[ofstream fout.open](#ofstream-foutopen)**
- **[read file](#read-file)**
- **[file read and write together](#file-read-and-write-together)**

<hr />
<br />

## Basic file i/o
***ofstream*** use write file and ***ifstream*** use for read file. But must include.***fstream*** header file. also ***fstream*** is base class of ***ofstream*** and ***ifstream***.
***ofstream *** object to write something inside the file. Here example : 

***Program : ofstream***
```cpp
#include <iostream>
#include<fstream> // fstream for using ofstream

using namespace std;

int main(void){
    // first create the file and write it in
    // ofstream file();

    /**
     * must include the fstream for use ofstream
     * first open the file. two way to open the file
     * first : 
     * file.open("file path as string")
     * 
     * secound, when it create
     * ofstream file("file path as string")
     * 
     * if it fuilare to open path then it return also 
     * 
     */

    // create file object
    // ofstream file("./file/new.txt"); first way to open file 
    char file_path[20] = "./file/new.txt";
    ofstream file;
    file.open(file_path); // another way to open file

    if(!file){ // it return false if file is can not open successfully
        cout << "Can not open file from " << file_path << endl;
        return 0;
    }

    char paragraph[400];
    cout << "Please Write something inside the file. When finish the writing then enter ctl + d" << endl;
    cin.getline(paragraph,sizeof(paragraph),EOF); // get the paragraph from user

    file << paragraph << endl; // write the inside file

    file.close(); // close the file.

    return 0;
}
```

***Output : ofstream***
```
Please Write something inside the file. When finish the writing then enter ctl + d
Ok this is my first paragraph write inside the file by this program<enter>
here I write some bla bla <enter>
---------------------------------<enter>
nothing to mean it is<enter>
It just a bla bla<enter>
-----------------<enter>
----------------<enter>
---------------<enter>
-------------- <enter>
-------------<enter>
------------<enter>
-----------<enter>
----------<enter>
---------<enter>
--------<enter>
-------<enter>
------<enter>
-----<enter>
----<enter>
---<enter>
--<enter>
-<enter>
>>> Here it is finish <<< < ctrl + d>
``` 

***Inside the file : ./file/nex.txt***
```
Ok this is my first paragraph write inside the file by this program
here I write some bla bla 
---------------------------------
nothing to mean it is
It just a bla bla
-----------------
----------------
---------------
--------------
-------------
------------
-----------
----------
---------
--------
-------
------
-----
----
---
--
-
>>> Here it is finish <<<

```

<hr />
<br />

## ofstream fout.open 
***ofstream*** ***open*** member function also overloaded. Which can compiler see like this : 
```cpp
ofstream fout.open("file/path/as/string",ios::out,file_buf::openport);

// in here secound argument is file mode. 
```

Here some file mode argument for ***open*** member function.

| File mode | Description                                                                                      |
|------------|---------------------------------------------------------------------- |
| ios::out    | it open file if exist, if not exist then it create file and writing something if it write like ios::out|ios:nocreate then it can not create new file |
| ios::in      | it open the file for reading not writing   |
| ios::app   | write something in the end of file. we can change position by ***ios::seekp()*** |
| ios::nocreate | open the file if exist otherwise throw error |
| ios::noreplace | create new file if file is dose not exist | 
| ios::binary      |  open the binary file otherwise open the text file |

<hr />
<br />

## read file
use ***fstream*** for read the file. Here example : 

***Program : fstream***
```cpp
#include <iostream>
#include <fstream>

using namespace std;

int main(void){
    // first open the file
    char file_path_name[30] = "./file/new.txt";
    // ifstream file(file_path_name);
    ifstream file;
    file.open(file_path_name); // another way to open file for read

    if(!file){ // if file can not open then it return false
        cout << "Sorry file can not open. Something is wrong...................." << endl;
        return 0;
    }

    cout << "Here inside the file is : " << endl;
    while(!file.eof()){ // file.eof() return false when can not find the eof which is exist end of file.
        cout <<  char(file.get()); // file.get() get the character of file one by one. start with first character. 
    }
    cout << "\n>>> Finish Here <<<" << endl;
    return 0;
}
```

***Output : ifstream***
```
Here inside the file is : 
Ok this is my first paragraph write inside the file by this program
here I write some bla bla 
---------------------------------
nothing to mean it is
It just a bla bla
-----------------
----------------
---------------
--------------
-------------
------------
-----------
----------
---------
--------
-------
------
-----
----
---
--
-
>>> Here it is finish <<<
�
>>> Finish Here <<<
```

<hr />
<br />

## file read and write together
We can open the file for read and write at a time. In that case create ***fstream*** object instead of ***ifstream*** and ***ofstream***. Here syntax :

```cpp
fstream file;
file.open("path/to/open/file",ios::in||ios::out); // ios::in for input and ios::out for output

// another wya is
fstream file("path/to/open/file",ios::in||ios::out); // ios::in for input and ios::out for output
```

<hr />

[< OLD README](./../README.md)
-----------