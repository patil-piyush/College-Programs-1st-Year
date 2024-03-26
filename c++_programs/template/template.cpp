#include<iostream>
using namespace std;

class student{
    
    public:
    template<class T>
    void totalmarks(T a, T b){
        T res = a + b;
        cout<<"Total marks : "<<res<<endl;
    }
};
int main(){
    student s1, s2;
    s1.totalmarks(20, 20);
    s2.totalmarks(22.22, 22.22);
    return 0;
}