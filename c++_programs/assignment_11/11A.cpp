#include<iostream>
using namespace std;

class test{
    public:
    float m1, m2;
    void read1(){
        cout<<"Enter the details: \n";
        cout<<"marks of subject 1 is: ";
        cin>>m1;
        cout<<"marks of subject 2 is: ";
        cin>>m2;
    }
    void show1(){
        cout<<"Marks of sub 1: "<<m1<<endl
            <<"Marks of sub 2: "<<m2<<endl;
    }
    test(){
        m1 = 0;
        m2 = 0;
        cout<<"constructor of class test is called\n";
    }
    ~test(){
        cout<<"destructor of class test is called\n";
    }
};

class SPA{
    public:
    float SPA_m1, SPA_m2;
    void read2(){
        cout<<"Enter the details: \n";
        cout<<"marks of SPA subject 1 is: ";
        cin>>SPA_m1;
        cout<<"marks of SPA subject 2 is: ";
        cin>>SPA_m2;
    }
    void show2(){
        cout<<"Marks of SPA sub 1: "<<SPA_m1<<endl
            <<"Marks of SPA sub 2: "<<SPA_m2<<endl;
    }
    SPA(){
        SPA_m1 = 0;
        SPA_m2 = 0;
        cout<<"Constructor of class SPA is called\n";
    };
    ~SPA(){
        cout<<"destructor of class SPA is called\n";
    }
};

class result:public test, public SPA{
    public:
    float final_result;
    char final_grade;
    void cal(){
        final_result = m1 + m2 + SPA_m1 + SPA_m2;
        if(final_result > 90){
            final_grade = 'O';
        }
        else if(final_result >= 80){
            final_grade = 'A';
        }
        else if(final_result >= 60){
            final_grade = 'B';
        }
        else if(final_result >= 50){
            final_grade = 'C';
        }
        else if(final_result >= 35){
            final_grade = 'D';
        }
        else{
            final_grade = 'F';
        }
        cout<<"final marks: "<<final_result<<endl
            <<"Final Grade: "<<final_grade<<endl;
    }
    result(){
        final_grade = 'x';
        final_result = 0;
        cout<<"constructor of class result is called\n";
    }
    ~result(){
        cout<<"destructor of class result is called\n";
    }
};

int main(){
    result R;
    bool loop = true;
    while (loop)
    {
        cout<<"choose from given options:\n"
            <<"1. Enter details of test\n"
            <<"2. Enter details of sports marks\n"
            <<"3. Show Final Result\n"
            <<"4. Exit\n"
            <<"\t Your Option: ";
        int n;
        cin>>n;
        switch (n)
        {
        case 1:
            R.read1();
            break;
        case 2:
            R.read2();
            break;
        case 3:
            R.cal();
            break;
        case 4:
            cout<<"Exiting the program.\n";
            loop = false;
            break;
        default:
            cout<<"Invalid option, choose again\n";
            break;
        }
    }
    return 0;
}