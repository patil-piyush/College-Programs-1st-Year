#include<iostream>
using namespace std;

template<class t>
class sample{
    public:
    int a, b;
    void add(t,t);
};

template<class t>
void sample <t>::add(t x, t y){
    t res;
    res = x + y;
    cout<<res<<endl;
}
int main(){
    sample<int>s;
    s.add(10,20);
    return 0;
}