#include <iostream>

using namespace std;

// create string class
class String{
    bool is_fill = false;
    char *s;
    int len = 0;

    public : 
        // constructor overloading
        String(char *_s);
        String(int _len);

        // create member function
        int get_len(void){return len;}
        void show_string(void);
        // overload member function
        void set(char *_s);
        void set(int _len);

        // destructor
        ~String(void);
};

String::String(char *_s){
    int _len = 0,i = 0;

    while(*(_s + _len)){
        _len++;
    }

    s = new char[_len+1];

    for(i = 0;i < _len;i++){
        *(s + i) = *_s++;
    }
    *(s+_len) = '\0';
    len = _len;
    is_fill = true;
}

String::String(int _len){
    s = new char[_len+1];
    len = _len;
}

// set string
void String::set(char *_s){
    len = 0;
    while(*(_s + len)){
        len++;
    }

    // create new string -> ns
    char *ns = new char[len + 1];

    for(int i = 0; i < len;i++){
        *(ns+i) = *(_s+i);
    }
    *(ns+len) = '\0';
    delete [] s;
    s = ns;
    is_fill = true;
}

// set string
void String::set(int _len){
    if(!is_fill){
        len = _len;
    }else{
        // create new string -> ns
        char *ns = new char[_len+1];
        
        int l = len < _len ? len : _len;
        int i;
        for(i = 0;i < l;i++){
            *(ns+i) = *(s+i);
        }

        ns[i] = '\0';
        delete [] s;
        s = ns;
    }
}

// show string
void String::show_string(void){
    if(!is_fill){
        cout << "NULL";
    }else{
        cout << s;
    }
}

// detructor
String::~String(void){
    delete [] s;
}

int main(void){
    String me("MD Tazri"),you(5);


    cout << "me.get_len() : " << me.get_len() << endl;
    cout << "me.show_string() : ";
    me.show_string();
    cout << endl;

    cout << "you.show_string() : ";
    you.show_string();
    cout << endl;
    cout << "you.get_len() : " << you.get_len() << endl;
    you.set(32);
    cout << "you.set(32) then len : " << you.get_len() << endl;

    me.set("Focasa");
    cout << "after set me : " << endl;
    cout << "me.get_len() : " << me.get_len() << endl;
    cout << "me.show_string() : ";
    me.show_string();
    cout << endl;
    return 0;
}