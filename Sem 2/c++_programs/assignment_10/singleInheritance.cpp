#include<iostream>
using namespace std;

class parent{
    int a=100;
    public:
    void show(){
        cout<<a<<endl<<"Parent class is called";
    }
};

class child: public parent{
    int b=200;
};

int main(){
    child c;
    c.show();
    return 0;
}