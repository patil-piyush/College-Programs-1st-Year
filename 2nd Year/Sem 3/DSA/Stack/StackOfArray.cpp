#include<iostream>
using namespace std;
class stack{
    public:
    string address;
    int Top;
    stack(){
        Top = -1;
    }
    stack(string s){
        address = s;
        Top = -1;
    }
    void read(){
        cout<<"enter the site address: ";
        cin>>address;
    }
    void display(){
        cout<<"enter the site address: "<<address;
    }
    void isEmpty(){
        if(Top == -1){
            cout<<"stack is empty\n";
        }
    }
}
int main(){
    
    return 0;
}