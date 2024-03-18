#include<iostream>
using namespace std;

class student{
    int roll;
    public:
    void read(){
        cout<<"enter the roll no. : ";
        cin>>roll;
    }
    void show(){
        cout<<"roll no.: "<<roll<<endl;
    }
};

class test:virtual public student{
    public:
    float m1,m2;
    void init(float a, float b){
        m1 = a;
        m2 = b;
    }
    void display(){
        cout<<"marks of subject 1 is: "<<m1<<endl
            <<"marks of subject 2 is: "<<m2<<endl;
    }
};

class sport:virtual public student{
    public:
    float SPA_mark;

    void calculate(float a){
        SPA_mark = a; 
    }

};

class result:public test, public sport{
    float final_marks;
    char final_grade;
    public:
    void calresult(){
        final_marks = m1 + m2 + SPA_mark;
        if(final_marks>=90){
            final_grade = 'O';
        }
        else if(final_marks>=80){
            final_grade = 'A';
        }
        else if(final_marks>=60){
            final_grade = 'B';
        }
        else if(final_marks>=40){
            final_grade = 'C';
        }
        else if(final_marks>=35){
            final_grade = 'D';
        }
        else{
            final_grade = 'F';
        }
    }
    void showResult(){
        cout<<"Final marks are: "<<final_marks<<endl
            <<"Final grade is: "<<final_grade<<endl;
    }
};

int main(){
    result R1;
    R1.read();
    R1.show();
    R1.init(20,10);
    R1.display();
    R1.calculate(30);
    R1.calresult();
    R1.showResult();
    return 0;
}