#include <iostream>
using namespace std;
class Hotel{
    public:
        string guest_name;
        int guest_age;
        int room_no;
        int no_ofdays;
        float amountDue;
    //Default Constructor
    Hotel(){
        guest_name="Null";
        guest_age =0;
        room_no=0;
        no_ofdays=0;
        amountDue=0;
    }
    //Parameterized Constructor
    Hotel(string n,int a,int b,int c,float d){
        guest_name=n;
        guest_age =a;
        room_no=b;
        no_ofdays=c;
        amountDue=d; 
    }
    //Copy Constructor
    Hotel(Hotel &H){
        guest_name=H.guest_name;
        guest_age =H.guest_age;
        room_no=H.room_no;
        no_ofdays=H.no_ofdays;
        amountDue=H.amountDue;  
    }
    void get_booking(){
        cout<<"Your booking Details are: "<<endl;
        cout<<guest_name<<endl<<guest_age<<endl
        <<room_no<<endl<<no_ofdays<<endl<<amountDue<<endl;
    }
};
int main(){
    Hotel h1; //Default Constructor is called
    h1.get_booking(); 
    Hotel h2("Rohan",22,403,5,5000); //Parameterized Constructor is called
    h2.get_booking(); 
    Hotel h3(h2); //Copy Constructor is called 
    h3.get_booking();  
    return 0;
}