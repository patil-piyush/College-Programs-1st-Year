#include<iostream>
using namespace std;
class employee{
    int id;
    string name;
    long salary;
    public:
        void read();
        void display();
        employee();     //default constructor
        employee(int a, string b, long c);   //parameterised constructor
        employee(employee &d);   //copy constructor
};

void employee::read(){
    cout<<"enter id: ";
    cin>>id;
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter salary: ";
    cin>>salary;
}

void employee::display(){
    cout<<"id : "<<id<<endl<<"name : "<<name<<endl<<"salary : "<<salary<<endl;
    cout<<"_________________________________________________________\n";
}

//default constructor
employee::employee(){
    id=123;
    name="none";
    salary=0;
}

//parameterised constructor
employee::employee(int a, string b, long c){
    id=a;
    name=b;
    salary=c;
}

//copy constructor
employee::employee(employee &c){
    id=c.id;
    name=c.name;
    salary=c.salary;
}

int main(){
    employee e1;   //calling default constructor
    cout<<"enter the details of employee:\n";
    e1.read();
    employee e2(234,"piyush",10000000000);  //calling parameterised constructor
    employee e3(e2);   //calling copy constructor
    cout<<"__________________________________________________________________\n";
    e1.display();
    e2.display();
    e3.display();
}
