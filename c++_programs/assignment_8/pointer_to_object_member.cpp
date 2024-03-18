#include<iostream>
using namespace std;

class student{
    int roll;
    int age;
    string gender;
    string name;
    public:
    student();
    student(string a, string b,int c, int d);
    void read();
    void show();
    void update();
    void del();
};

void student::read(){
    cout<<"Enter the student details:\n";
    cout<<"Name: ";
    cin>>name;
    cout<<"Roll No.: ";
    cin>>roll;
    cout<<"Gender: ";
    cin>>gender;
    cout<<"Age: ";
    cin>>age;
}

void student::student(){ 
        roll = 0; 
        gender = NULL; 
        age = 0; 
        name = NULL; 
} 

void student::student(string a, string b,int c, int d){ 
        name = a; 
        gender = b; 
        roll = c; 
        age = d; 
} 

void student ::show(){
    cout<<"Student Details are:\n "
        <<"Name: "<<name<<endl
        <<"Roll No.: "<<roll<<endl
        <<"Age: "<<age<<endl
        <<"Gender: "<<gender<<endl;
}

void student::update(){
    int y, w;
    string x, z;
    cout<<"Enter new details:\n";
    cout<<"Name: ";
    cin>>x;
    cout<<"Roll No.: ";
    cin>>y;
    cout<<"Gender: ";
    cin>>z;
    cout<<"Age: ";
    cin>>w;
    student(x,z,y,w);
}

void student:: del(){
    student();
}

int main(){
    bool ebool=false;
    student s1;
    student *p;
    p = &s1;
    while(ebool){
        cout<<"Welcome to student database\n"
            <<"1. Add data of new student.\n"
            <<"2. Show the details of student\n"
            <<"3. Update the details of student\n"
            <<"4. Delete the details of student\n"
            <<"5. Exit\n";
        int n1;
        cin>>n1;
        switch (n1){
            case 1:
                p->read();
                break;
            
            default:
                break;
        }
    }
}