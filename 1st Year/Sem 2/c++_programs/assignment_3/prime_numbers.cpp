#include <iostream>
using namespace std;
int main() {
    int n;
    int count=0;
    int flag=0;
    cout<<"enter the number upto which you want to find the prime numbers: ";
    cin>>n;
    if(n==0 || n==1){
        cout<<"number is not valid\n";
    }
    else{
        for(int i=2; i<n; i++){
            flag=0;
            for(int j=2; j<i; j++){
                if(i%j==0){
                    flag=1;
                    break;
                }
                
            }
            if(flag==0){
                cout<<i<<" ";
                count++;
            }
            
        }
    }cout<<"\ntotal number of prime numbers from 1 to "<<n<<" are : "<<count<<endl;
    return 0;
}
