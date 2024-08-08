#include<iostream>
using namespace std;

class parent1{
    public:
    int a=100;
    void show1(){
        cout<<a<<endl<<"Parent 1 class is called"<<endl;
    }
};

class parent2{
    public:
    int b=200;
    void show2(){
        cout<<b<<endl<<"Parent 2 class is called"<<endl;
    }
};

class child: public parent1,public parent2{
    int c=300;
    public:
    void show(){
        cout<<"sum of a and b is : "<<a+b<<endl;
    }
};

int main(){
    child x;
    x.show1();
    x.show2();
    x.show();
    return 0;
}