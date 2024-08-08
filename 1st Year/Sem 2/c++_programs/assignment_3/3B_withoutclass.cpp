#include <iostream>
using namespace std;
int main() {
    int n;
    int greatest, smallest;
    cout<<"enter the number of elements you want to store: ";
    cin>>n;
    int a[n];
    cout<<"enter elements: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    greatest = a[0];
        for (int i = 0; i < n; i++){
            if(greatest < a[i]){
                greatest = a[i];
            }
        }
     smallest = a[0];
        for (int i = 0; i < n; i++){
            if(smallest > a[i]){
                smallest = a[i];
            }
        }
    
    cout<<"smallest element in given data is "<<smallest<<"\n";
    cout<<"greatest element in given data is "<<greatest<<"\n";
    
    return 0;
}
