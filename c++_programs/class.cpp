#include<iostream>
using namespace std;
class student{
    int roll, age;
    string branch, name, year;
    public:
        void read();
        void display();
        student();
};

void student::read(){
    cin>>roll>>age>>name>>branch>>year;
}

void student::display(){
    cout<<roll<<endl<<age<<endl<<name<<endl<<branch<<endl<<year<<endl<<endl;
}

student::student(){
    roll=1;
    age=18;
    name="none";
    branch="none";
    year="FY";
}
int main(){
    student s1;
    cout<<"enter the student details as\n1)roll no.\n2)age\n3)name\n4)branch\n5)year\n";
    s1.read();
    student s2;
    s1.display();
    s2.display();
}