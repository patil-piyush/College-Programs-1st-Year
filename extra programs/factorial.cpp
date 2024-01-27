#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number for which you want to find the factorial: ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"factorial of "<<n<<" is "<<fact;
    return 0;
}