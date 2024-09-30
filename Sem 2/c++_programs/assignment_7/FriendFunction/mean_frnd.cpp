#include <iostream>
using namespace std;
class sample2;  // forward declaration
class sample1{
    int a;
    public:
        void show();
        void read();
        sample1();  //default constructor
        friend void mean(sample1&, sample2&);//declaring friend function
};

class sample2{
    int b;
    public:
        void show();
        void read();
        sample2();  //default constructor
        friend void mean(sample1&, sample2&);//declaring friend function
};

//sample1 functions
void sample1::show(){
    cout<<a<<"\n";
}
void sample1::read(){
    cout<<"enter the value of a: ";
    cin>>a;
}        
sample1::sample1(){
    a=10;
}

//sample2 functions
void sample2::show(){
    cout<<b<<"\n";
}
void sample2::read(){
    cout<<"enter the value of b: ";
    cin>>b;
}
sample2::sample2(){
    b=20;
}

//defining friend function
void mean(sample1 &p, sample2 &q){
    int mean;
    mean=(p.a+q.b)/2;
    cout<<mean<<endl;
}

int main() {
    sample1 c;
    sample2 d;
    c.read();
    d.read();
    mean(c, d);
    return 0;
}
