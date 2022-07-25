#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main(){
    cout << "Cpp to Linux Sh Converter!!!!!\n";
    cout << "By Sharjeel Baig\n";
    string dir;
    cout << "Enter Directory/File name (Example: main.cpp or \"/folder/file.cpp\")\n";
    getline(cin, dir);
    string fileName;
    cout << "Enter Output File name (Example: myFile.sh or \"my file.sh\")\n";
    getline(cin, fileName);
    string command = "g++ " +dir+ " -o "+fileName;
    system(command.c_str());
    cout <<"100%";

return 0;
}