#include<iostream>
using namespace std;

class person{
    public:
    string name;
    int age;
    person(){}
    virtual void read() = 0; //assigning the function to 0 will make them pure virtual function
    virtual void show() = 0; //assigning the function to 0 will make them pure virtual function

    //By creating Pure virtual functions we must declare and define the functions named same as the base class functions in the derived classes 
};

class student : public person{
    private:
    int cur_id;
    float marks[3];
    static int id;
    
    public:
    void read();
    void show();
};

class professor : public person{
    private:
    int publications;
    int cur_id;
    static int id;
    
    
    public:
    void read();
    void show();
};


//defining the functions of class student 
int student::id = 0;
void student::read(){
    cout<<"Enter the details of student: \n"
        <<"Name: ";
    cin>>name;
    cout<<"Age: ";
    cin>>age;
    for (int i = 0; i < 3; i++){
        cout<<"Enter the marks of subject "<<i+1<<": ";
        cin>>marks[i];
    }
    cur_id = ++id;
    cout<<"ID assigned to this student is: "<<cur_id<<endl<<"-----------------------------------------------------------------------"<<endl;
}

void student::show(){
    float sum = 0;
    cout<<"Details of the students are as follows:\n"
        <<"\tName: "<<name
        <<"\n\tAge: "<<age;
    for (int i = 0; i < 3; i++){
        cout<<"\n\tThe marks of subject "<<i+1<<": "<<marks[i];
        sum = sum + marks[i]; 
    }
    cout<<"\n\tTotal marks: "<<sum<<endl<<"-----------------------------------------------------------------------"<<endl;
}

//defining the functions of class professor
int professor::id = 0;
void professor::read(){
    cout << "Enter Details of Professor:\n";
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Publications: ";
    cin >> publications;
    cur_id = ++id;
    cout<<"ID assigned to this professor is: "<<cur_id<<endl<<"-----------------------------------------------------------------------"<<endl;
}

void professor::show(){
    cout<<"Details of the professor are as follows:"
        <<"\n\tName: "<<name
        <<"\n\tAge: "<<age
        <<"\n\tPublications: "<< publications
        <<"\n\tcur_id: "<<cur_id
        <<endl<<"-----------------------------------------------------------------------"<<endl;
}

int main(){
    student s[10];
    professor p[10];
    int px = 0, sx = 0;
    while (1){
        cout<<"Choose from given options:\n\t"
            <<"1. Enter Student Database\n\t"
            <<"2. Enter Professor Database\n\t"
            <<"3. Exit\n\t"
            <<"\tYour Option: ";
            int option;
            cin>>option;
            switch(option){
                case 1: {
                    bool eloop1 = true;
                    while(eloop1){
                        cout<<"Choose from given options:\n\t"
                        <<"1. Add new Student data in Student Database\n\t"
                        <<"2. View Student Data\n\t"
                        <<"3. Exit\n\t"
                        <<"\tYour Option: ";
                        int option1;
                        cin>>option1;
                        switch(option1){
                            case 1:
                                if(sx<10){
                                    s[sx++].read();
                                }
                                else{
                                    cout<<"Student database is full!!!!!!!!!\n";
                                }
                                break;
                            case 2:
                                int studentid;
                                cout<<"Enter the ID of Student to show the details: ";
                                cin>>studentid;
                                s[--studentid].show();
                                break;
                            case 3:
                                cout<<"Exiting the Student Database!!!!!!!!!!\n";
                                eloop1 = false;
                                break;
                            default:
                                cout<<"Invalid option, Enter again!!!!!!\n"<<"-----------------------------------------------------------------------"<<endl;
                                break;
                        }
                    }
                    break;
                }
                case 2: {
                    bool eloop2 = true;
                    while(eloop2){
                        cout<<"Choose from given options:\n\t"
                        <<"1. Add new Professor data in Professor Database\n\t"
                        <<"2. View Professor Data\n\t"
                        <<"3. Exit\n\t"
                        <<"\tYour Option: ";
                        int option2;
                        cin>>option2;
                        switch(option2){
                            case 1:
                                if(px<10){
                                    p[px++].read();
                                }
                                else{
                                    cout<<"Professor database is full!!!!!!!!!\n";
                                }
                                break;
                            case 2:
                                int professorid;
                                cout<<"Enter the ID of professor to show the details: ";
                                cin>>professorid;
                                p[--professorid].show();
                                break;
                            case 3:
                                cout<<"Exiting the Professor Database!!!!!!!!!!\n"<<"-----------------------------------------------------------------------"<<endl;
                                eloop2 = false;
                                break;
                            default:
                                cout<<"Invalid option, Enter again!!!!!!\n"<<"-----------------------------------------------------------------------"<<endl;
                                break;
                        }
                    }
                    break;
                }
                case 3:
                    cout<<"Exiting the Program!!!!!!!!!!\n"<<"-----------------------------------------------------------------------"<<endl;
                    exit(0);
                default:
                    cout<<"Invalid option, Enter again!!!!!!\n"<<"-----------------------------------------------------------------------"<<endl;
                    break;
            }
    }
    return 0;
}