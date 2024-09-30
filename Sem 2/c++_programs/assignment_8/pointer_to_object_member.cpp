#include<iostream>
using namespace std;

class student{
    int roll;
    int age;
    string gender;
    string name;
    public:
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

void student ::show(){
    cout<<"Student Details are:\n "
        <<"Name: "<<name<<endl
        <<"Roll No.: "<<roll<<endl
        <<"Age: "<<age<<endl
        <<"Gender: "<<gender<<endl;
}

void student::update(){
    cout<<"Enter new details:\n";
    cout<<"Name: ";
    cin>>name;  
    cout<<"Roll No.: ";
    cin>>roll;
    cout<<"Gender: ";
    cin>>gender;
    cout<<"Age: ";
    cin>>age;
}

void student:: del(){
    roll = 0; 
    gender = "null"; 
    age = 0; 
    name = "null";
}

int main(){
    bool ebool=true;
    student s1;
    student *p;
    p = &s1;
    while(ebool){
        cout<<"Welcome to student database\n"
            <<"1. Add data of new student.\n"
            <<"2. Show the details of student\n"
            <<"3. Update the details of student\n"
            <<"4. Delete the details of student\n"
            <<"5. Exit\n"
            <<"\tSelected option: ";
        int n1;
        cin>>n1;
        switch (n1){
            case 1:
                p->read();
                break;
            case 2:
                p->show();
                break;
            case 3:
                p->update();
                break;
            case 4:
                p->del();
                break;
            case 5:
                cout<<"Exiting the student database.\n";
                exit(0);
            default:
                cout<<"Invalid number, choose again\n";
                break;
        }
    }
    return 0;
}