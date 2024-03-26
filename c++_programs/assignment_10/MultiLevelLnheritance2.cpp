#include<iostream>
using namespace std;

class triangle{
    int a = 10;
    public:
    void show(){
        cout<<"I am a Triangle.\n";
    }
};

class isoscelesTriangle: public triangle{
    int b = 20;
    public:
    void display(){
        cout<<"I am an isosceles triangle.\n";
    }
};

class equilateralTriangle: public isoscelesTriangle{
    int b = 20;
    public:
    void print(){
        cout<<"I am an equilateral triangle.\n";
    }
};


int main(){
    equilateralTriangle t;
    t.print();
    t.display();
    t.show();
    return 0;
}