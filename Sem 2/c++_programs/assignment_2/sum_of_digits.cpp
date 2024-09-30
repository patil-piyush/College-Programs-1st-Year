#include <iostream>
using namespace std;
int main() {
    int n,r,sum=0;
    cout<<"enter the number: ";
    cin>>n;
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout<<"sum of digits of given number is "<<sum;
    return 0;
}
