#include<iostream>
using namespace std;
class a{
    int x;
    static int y;
    public:
    void read();
    void display();
    a();
};
int a::y=10;
void a::read()
{
    cout<<"enter the non-static variable : ";
    cin>>x;
    cout<<"enter the static variable : ";
    cin>>y;
}
void a::display()
{
    cout<<"the non-static variable is : "<<x<<endl;
    cout<<"the static variable is : "<<y<<endl;
}
a::a()
{
    x=0;
    y=0;
}
int main()
{
    a obj1;
    a obj2;
    obj1.read();
    obj2.read();
    obj1.display();
    obj2.display();
    return 0;
}

