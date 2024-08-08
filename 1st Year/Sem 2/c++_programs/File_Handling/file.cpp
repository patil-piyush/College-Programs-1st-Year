#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string str;
    cout<<"Enter text: ";
    cin>>str;

    fstream out;
    out.open("/workspaces/College_Programs/c++_programs/File_Handling/file.txt");
    out<<str;
    out.close();
}