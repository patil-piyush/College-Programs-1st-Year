#include<iostream>
using namespace std;
class employee{
    int id;
    string name;
    long salary;
    public:
        void read();
        void display();
        employee();
        employee(int a, string b, long c);
        employee(employee &d);
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

employee::employee(){
    id=123;
    name="none";
    salary=0;
}

employee::employee(int a, string b, long c){
    id=a;
    name=b;
    salary=c;
}

employee::employee(employee &c){
    id=c.id;
    name=c.name;
    salary=c.salary;
}

int main(){
    employee e1;
    cout<<"enter the details of employee:\n";
    e1.read();
    employee e2(234,"piyush",10000000000);
    employee e3(e2);
    cout<<"__________________________________________________________________\n";
    e1.display();
    e2.display();
    e3.display();
}
