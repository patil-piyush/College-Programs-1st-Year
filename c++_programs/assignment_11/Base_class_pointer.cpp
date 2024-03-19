#include<iostream>
using namespace std;
class parent{
    int a = 100;
    public:
    virtual void show();
    virtual void update();    
};

class child:public parent{
    int b = 200;
    public:
    void show();
    void update();
};

void child::show(){
    cout<<b<<endl;
}
void child::update(){
    cout<<"enter value of B: ";
    cin>>b;
}

int main(){
    child obj;
    parent *ptr;
    ptr = &obj;
    ptr->show();
    ptr->update();
    ptr->show();
    return 0;
}