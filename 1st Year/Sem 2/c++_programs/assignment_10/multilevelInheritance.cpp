#include<iostream>
using namespace std;

class student{
    int roll;
    public:
    void get(){
        cout<<"Enter the roll no : ";
        cin>>roll;
    }
};

class test:public student{
    public:
    int sub1, sub2, mark;
    void getmarks(int n1, int n2){
        sub1 = n1;
        sub2 = n2;
        mark = sub1 + sub2;
    }
};

class marks:public test{
    public:
    void display(){
        cout<<"marks of subject 1 is : "<<sub1<<endl
            <<"marks of subject 2 is : "<<sub2<<endl
            <<"Total marks is : "<<mark<<endl;
    }
};


int main(){
    marks m;
    m.get();
    m.getmarks(91,56);
    m.display();
    return 0;
}