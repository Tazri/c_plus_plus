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