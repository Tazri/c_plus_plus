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