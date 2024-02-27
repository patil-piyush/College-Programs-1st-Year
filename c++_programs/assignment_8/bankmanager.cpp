#include<iostream>
using namespace std;
class manager;
class bank{
    string name;
    string acc_typ;
    char status;
    float balance;
    public:
    void read();
    void display(bank a);
};

int bank::acc_no=0;
void bank::read(){
        cout<<"Enter the details:\n1.Name :";
        cin>>name;
        cout<<"2.Balance :";
        cin>>balance;
        cout<<"3.Account type :";
        cin>>acc_typ;
        acc_no++;
}

void bank::display(bank a){
    cout<<"1.Name : "<<a.name<<endl<<"2.Account number : "<<a.acc_no<<endl<<"3.Account type : "<<a.acc_typ<<endl
    <<"4.Account status : "<<a.status<<endl<<"5. Balance : "<<a.balance<<endl;

}
