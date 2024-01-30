#include <iostream>
using namespace std;
class sample2;  //forward declaration
class sample1{
    int a;
    public:
        void show();
        sample1();
        void read();
        friend void addition(sample1&, sample2&);
        friend void subtraction(sample1&, sample2&);
        friend void multiplication(sample1&, sample2&);
        friend void division(sample1&, sample2&);
        friend void remainder(sample1&, sample2&);
};

class sample2{
    int b;
    public:
        void show();
        sample2();
        void read();
        friend void addition(sample1&, sample2&);
        friend void subtraction(sample1&, sample2&);
        friend void multiplication(sample1&, sample2&);
        friend void division(sample1&, sample2&);
        friend void remainder(sample1&, sample2&);
};

// defining functions of sample1    
void sample1::show(){
            cout<<a<<"\n";
}
void sample1::read(){
    cout<<"enter value of a: ";
    cin>>a;
}
sample1::sample1(){
    a=10;
}

// defining functions of sample2
void sample2::show(){
            cout<<b<<"\n";
}
void sample2::read(){
    cout<<"enter value of b: ";
    cin>>b;
}
sample2::sample2(){
    b=10;
}

// defining friend functions
void addition(sample1 &x, sample2 &y){
    if(x.a>y.b || y.b>x.a){
        int sum;
        sum=x.a+y.b;
        cout<<sum<<endl;
    }
}
void subtraction(sample1 &x, sample2 &y){
    if(x.a>y.b){
        int sum;
        sum=x.a-y.b;
        cout<<sum<<endl;
    }
    else{
        int sum;
        sum=y.b-x.a;
        cout<<sum<<endl;
    }
}
void multiplication(sample1 &x, sample2 &y){
    int sum;
    sum=(x.a)*(y.b);
    cout<<sum<<endl;
}
void division(sample1 &x, sample2 &y){
    float sum;
    if(x.a>y.b){
        sum=(x.a)/(y.b);
        cout<<sum<<endl;
    }
    else{
        sum=(y.b)/(x.a);
        cout<<sum<<endl;
    }
}
void remainder(sample1 &x, sample2 &y){
    float sum;
    if(x.a>y.b){
        sum=(x.a)%(y.b);
        cout<<sum<<endl;
    }
    else{
        sum=(y.b)%(x.a);
        cout<<sum<<endl;
    }
}
int main() {
    int count,flag;
    sample1 s;
    sample2 r;
    s.read();
    r.read();
    count=1;
    while(count==1){
        count=0;
        cout<<"enter the serial number of the operation that you want to perform: \n1.addition\n2.subtraction\n3.multiplication\n4.division\n5.finding remainder\n:";
        cin>>flag;
        if(flag==1){
            addition(s,r);
        }
        else if(flag==2){
            subtraction(s,r);
        }
        else if(flag==3){
            multiplication(s,r);
        }
        else if(flag==4){
            division(s,r);
        }
        else{
            remainder(s,r);
        }
        cout<<"do you want to perform arithmetic another operation\nyes=1/no=0: ";
        cin>>count;
        
    }
    cout<<"End of calculator\n";
    return 0;
}
