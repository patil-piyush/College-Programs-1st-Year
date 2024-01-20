#include <iostream>
using namespace std;
class sample2;  // forward declaration
class sample1{
    int a;
    string x;
    public:
        void show();
        sample1();  //default constructor
        friend void swap(sample1&, sample2&);//declaring friend function
};

class sample2{
    int b;
    string y;
    public:
        void show();
        sample2();  //default constructor
        friend void swap(sample1&, sample2&);//declaring friend function
};

void sample1::show(){
            cout<<a<<"\t"<<x<<"\n";
        }
sample1::sample1(){
            a=10;
            x="Hello brothers!";
        }
void sample2::show(){
            cout<<b<<"\t"<<y<<"\n";
        }
        
sample2::sample2(){
            b=20;
            y="Hello everyone!";
        }
        
//defining friend function
void swap(sample1 &p, sample2 &q){
    int temp1;
    string temp2;
    //int swap
    temp1=p.a;
    p.a=q.b;
    q.b=temp1;
    
    //string swap
    temp2=p.x;
    p.x=q.y;
    q.y=temp2;
}

int main() {
    sample1 c;
    sample2 d;
    c.show();
    d.show();
    swap(c, d);
    c.show();
    d.show();
    return 0;
}
