#include <iostream>
using namespace std;
int main() {
    int n, m, flag=0;
    cout<<"enter the number of elements you want to store in data: ";
    cin>>n;
    int a[n];
    cout<<"enter elements: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"enter the element that you want to search in stored data: ";
    cin>>m;
     for(int i=0; i<n; i++){
        if(m == a[i]){
            cout<<"the element is found at position "<<i+1;
            flag=1;
            exit(0);
        }
    }
    if(flag==0){
        cout<<"element not found";
    }
    return 0;
}
