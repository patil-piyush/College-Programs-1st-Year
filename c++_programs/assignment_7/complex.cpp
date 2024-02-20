#include<iostream>
using namespace std;
class complex{
    float real, img;
public:
    void read();
    complex operator+ (complex c2);
    complex operator- (complex c2);
    complex operator* (complex c2);
    complex operator/ (complex c2);
};

void complex::read(){
    cout<<"enter the real value: ";
    cin>>real;
    cout<<"enter the imaginary value: ";
    cin>>img;
}

complex complex::operator+(complex c2){
    complex c3;
    c3.real = real + c2.real;
    c3.img = img + c2.img;
    cout<<"Addition: "<<c3.real<<" + "<<c3.img<<"i"<<endl;
    return c3;
}

complex complex::operator-(complex c2){
    complex c3;
    c3.real  = real - c2.real;
    c3.img = img - c2.img;
    cout<<"Subtraction: "<<c3.real<<" + "<<c3.img<<"i"<<endl;
    return c3;
}

complex complex::operator*(complex c2){
    complex c3;
    int res1 = real * c2.real;
    int res2 = real * c2.img;      
    int res3 = img * c2.real;
    int res4 = img * c2.img;
    c3.real = res1-res4;
    c3.img = res2+res3;
    cout<<"Multiplication: "<<c3.real<<" + "<<c3.img<<"i"<<endl;
    return c3;
}

complex complex::operator/(complex c2){
    complex c3;
    float res1 = ((real*c2.real)+(img*c2.img))/((c2.real*c2.real)+(c2.img*c2.img));
    float res2 = ((img*c2.real)-(real*c2.img))/((c2.real*c2.real)+(c2.img*c2.img));
    c3.real = res1;
    c3.img = res2;
    cout<<"Division: "<<c3.real<<" + "<<c3.img<<"i"<<endl;
    return c3;
}

int main(){
    complex c1, c2;
    cout<<"enter the details of c1: \n";
    c1.read();
    cout<<"enter the details of c2: \n";
    c2.read();
    c1 + c2;
    c1 - c2;
    c1 * c2;
    c1 / c2;
    return 0;
}
