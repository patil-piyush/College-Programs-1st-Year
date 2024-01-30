#include<iostream>
using namespace std;
class sort{
    int a[10];
    public:
    void read();
    void display();
    void sorting();
};

void sort::display(){
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\t";
}

void sort::read(){
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
}

void sort::sorting(){
    int temp;
    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main(){
    sort s;
    s.read();
    s.sorting();
    s.display();
    return 0;
}