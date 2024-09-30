#include<iostream>
#include<string.h>
using namespace std;

static int p=123123100;//using static variable to assign account number 
class customer; // Forward declaration

//creating class bank as base class
class bank{
    public:
        string name;
        int accno;
        float balance;
        string acctype;
        // virtual void setdata();
        // virtual void getdata();
        bank();
        bank(string x, int y, string z);
        
        
};

//creating 'class manager' as derived calss of 'class bank'
class manager : public bank{
    public:
        void setdata(customer &a);
        void removedata(customer &a);
        
};
//creating 'class customer' as derived calss of 'class bank'
class customer : public bank{
    public:
        void getdata();
        void diposit(float n);
        void withdraw(float n);
        friend class manager;
};

//defining the member functions of base class bank
bank :: bank(){
    name= "NONE";
    balance = 0;
    acctype="null";
    accno=0;
}

bank :: bank(string x, int y, string z){
    name= x;
    balance = y;
    acctype=z;
    accno=p;
    p++;
}

//defining the member functions of class customer
void customer :: getdata(){
    cout<<"Your account details are: \n"<<"\tName: "
        <<name<<"\n\tAccount number: "
        <<accno<<"\n\tBalance: Rs."
        <<balance<<"\n\tAccount Type: "
        <<acctype<<endl<<"---------------------------------------------------------------"<<endl;
}

void customer :: diposit(float n){
    balance = balance + n;
    cout<<"Your total balance is "<<balance<<endl<<"---------------------------------------------------------------"<<endl;
}
        
void customer :: withdraw(float n){
    balance = balance - n;
    cout<<"Your total balance is "<<balance<<endl<<"---------------------------------------------------------------"<<endl;
}



//defining the member functions of class customer
void manager :: setdata(customer &a){
    a.accno = p;
    p=p+1;
    cout<<"Enter the details:\n";
    cout<<"1. Name: ";
    cin>>a.name;
    cout<<"2. Account Type: ";
    cin>>a.acctype;
    cout<<"3. Balance: ";
    cin>>a.balance;
    cout<<"Your assigned account number is  "<<a.accno<<endl<<"---------------------------------------------------------------"<<endl;      
}

void manager :: removedata(customer &a){
    a.name= "NONE";
    a.balance = 0;
    a.acctype="null";
}



int main(){
    bool eloop;
    manager man;
    customer custom[100];
    
    while(1){
        cout<<"Choose from below option:\n"
            <<"1. Sign in as customer\n"
            <<"2. Sign in as manager\n"
            <<"3. Exit\n"<<"Your choice : ";
        int choice1;
        cin>>choice1;
        switch (choice1){
            case 1:
                //signing in as customer
                // bool eloop;
                eloop = true;
                while (eloop){
                    cout<<"choose from below options:\n"
                        <<"1. Show account information\n"
                        <<"2. Deposite money\n"
                        <<"3. Withdraw money\n"
                        <<"4. Exit\n"<<"Your choice : ";
                    int choice_customer;
                    cin>>choice_customer;
                    switch (choice_customer){
                        case 1:
                            //Displaying account information
                            cout<<"Enter the account no. : ";
                            int accno1, accno2;
                            cin>>accno1;
                            accno2 = accno1%1231231;
                            if (accno2>=0 && accno2<100){
                                custom[accno2].getdata();
                            }
                            else{
                                cout<<"Invalid Account Number."<<endl;
                            }

                            break;
                        case 2:
                            //Depositing money
                            cout<<"Enter the account no. : ";
                            cin>>accno1;
                            float amt_deposit;
                            accno2 = accno1%1231231;
                            if (accno2>=0 && accno2<100){
                                cout<<"Enter the amount to be deposit: ";
                                cin>>amt_deposit;
                                custom[accno2].diposit(amt_deposit);
                            }
                            else{
                                cout<<"Invalid Account Number."<<endl;
                            }
                            break;
                        case 3:
                            //Withdrawing  Money
                            cout<<"Enter the account no. : ";
                            cin>>accno1;
                            accno2 = accno1%1231231;
                            float amt_withdraw;
                            if (accno2>=0 && accno2<100){
                                cout<<"Enter the amount to be withdraw: ";
                                cin>>amt_withdraw;
                                custom[accno2].withdraw(amt_withdraw);
                            }
                            else{
                                cout<<"Invalid Account Number.\n"<<endl;
                            }
                            break;
                        case 4:
                            //signing out as customer
                            cout<<"Signing out as CUSTOMER\n"<<"---------------------------------------------------------------"<<endl;
                            eloop=false;
                            break;
                        default:    
                            cout<<"\nInvalid Choice, Enter again\n"<<endl;
                            break;
                    }
               

                }
                
                
                break;
            case 2:
                //signing in as manager
                eloop = true;
                while (eloop){
                    cout<<"choose from below options:\n"
                        <<"1. Create a bank account\n"
                        <<"2. Delete a bank account\n"
                        <<"3. Exit\n"<<"Your choice : ";
                    int choice_manager;
                    cin>>choice_manager;
                    switch(choice_manager) {
                        case 1:
                            //Creating a bank account
                            man.setdata(custom[p % 1231231]);
                            break;
                        case 2:
                            //deleting a bank accounts
                            cout<<"Enter the account no. : ";
                            int accno3;
                            int accno4;
                            cin>>accno3;
                            accno4 = accno3%1231231;
                            if (accno4>=0 && accno4<100){
                                man.removedata(custom[accno4]);
                                cout<<"Your account is deleted"<<endl<<"---------------------------------------------------------------"<<endl;
                            }
                            else{
                                cout<<"Invalid Account Number.\n"<<endl;
                            }
                            break;
                        case 3:
                            //Signing out as manager 
                            cout << "Signing Out As Manager\n"<<"---------------------------------------------------------------"<<endl;
                            eloop=false;
                            break;
                        default:
                            cout << "\nInvalid Input. Please enter again.\n" << endl;
                            break;
                    }
                }
                break;
            case 3:
                //exit the program
                cout << "Exiting The Bank\nThank you for visiting, Have a nice day!\n";
                exit(0);
            default:
                cout<<"\nInvalid Choice, Enter again\n"<<endl;
                break;
                
        }
    }
    return 0;
}
