#include<iostream>
#include<cmath>
using namespace std;

class area{
    float length, breadth, radius, a, b, c;
    public:
        void over(float length, float breadth);
        void over(float radius);
        void over(float a, float b, float c);
};

void area::over(float length, float breadth){
    // cout<<"enter the values of length and breadth: ";
    // cin>>length>>breadth;
    float area = length * breadth;
    cout<<"area of rectangle is "<<area<<endl;
}

void area::over(float radius){
    // cout<<"enter the values of radius: ";
    // cin>>radius;
    float area = (3.14) * radius * radius;
    cout<<"area of circle is "<<area<<endl;
}

void area::over(float a, float b, float c){
    // cout<<"enter the values of a, b and c: ";
    // cin>>a>>b>>c;
    float sum = (a + b + c)/2;
    float area = sqrt( (sum) * (sum-a) * (sum-b) * (sum-c) );
    cout<<"area of triangle is "<<area<<endl;
}

int main(){
    area a;
    a.over(10.5,50.2);
    a.over(10.5);
    a.over(10.2,10.2,10.2);
}