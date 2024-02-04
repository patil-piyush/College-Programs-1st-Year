#include<iostream>
using namespace std;
class HotelManagement{
   public : 
            int roomNo, guestID, noOfDays;
            float amountDue;  //amount due to be paid by the customer
            void getDetails() { cout << "Enter Room Number : "; cin >> roomNo;
                          cout << "\nEnter Guest ID : "; cin >> guestID;
                          cout << "\nNumber of Days Stayed (in days) : "; cin >> noOfDays; }
            void calculateAmount(){ 
                amountDue = 100 * noOfDays;    //rate per day is Rs.100
            }   
            void display(){
                cout << "\n\nRoom No : " << roomNo << endl;
                cout << "Guest ID : " << guestID << endl;
                cout << "Number of Days Stayed : " << noOfDays << endl;
                cout << "Amount Due (Rs.) : " << amountDue << endl;
            }
};
int main()
{
     HotelManagement hm;
     hm.getDetails();
     hm.calculateAmount();
     hm.display();
     
}

