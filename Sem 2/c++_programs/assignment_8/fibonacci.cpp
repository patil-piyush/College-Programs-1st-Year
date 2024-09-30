#include <iostream>
using namespace std;
class fib{
    int n1, n2, n3, n;
    public:
    void read(){
        cout<<"how many terms do you want to generate? : ";
        cin>>n;
    }
    void display(){
        cout<<n1<<" "<<n2<<" ";
    for(int i=2; i<=n; i++){
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
    }
    fib(){
        n1=0, n2=1, n3=0;
    }
};
int main() {
    int n;
    fib f1;
    f1.read();
    f1.display();
    return 0;
}
