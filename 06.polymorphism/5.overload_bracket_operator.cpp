#include <iostream>

using namespace std;

// create String class
class String{
    int len = 0;
    char *string = NULL;

    public : 
        // construtor
        String(int len = 0);
        String(char _string[]);

        // member funciton
        void set_string(char _string[]);

        // destructor
        ~String(void){
            if(string != NULL){
                delete [] string;
            }
        }

        // operator overload
        void operator=(char _strint[]);
        char operator[](int _index);

        // friends
        friend void operator<<(ostream &,String &);
};

// constructor
String::String(int _len){
    len =_len;
}

String::String(char _string[]){
    String::set_string(_string);
}

// set string
void String::set_string(char _string[]){
    // measure the len -> l
    int l = 0;
    while(_string[l]){
        l++;
    }

    // memory allocate for the string
    char *new_string = new char[l+1];
    delete [] string;
    string = new_string;
    len = l;

    // copy the string
    for(int i = 0;i < len;i++){
        *(string + i) = _string[i];
    }

    *(string + len) = '\0';
}

// operator overload
void String::operator=(char _string[]){
    set_string(_string);
}

char String::operator[](int _index){
    if(_index < len){
        return *(string+_index);
    }else{
        return '\0';
    }
}

// friend of string class
void operator<<(ostream &os,String &_string){
    if(_string.len){
        os << _string.string << endl;
    }else{
        os << "Empty" << endl;
    }
}

int main(void){
    String name = "Md Tazri";
    cout << name;

    name = "Troy Farha Tazri Di Focasa";
    cout << name;

    cout << name[3] << name[8] << endl;
    return 0;
}