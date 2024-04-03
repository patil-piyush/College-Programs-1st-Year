// PRN: 123B1B220
// Name: Piyush Rajkumar Patil
// Batch: L3
#include <iostream>
using namespace std;
template <class T>
void sort(T){
int n;
cout << "enter how many numbers you want to sort: ";
cin >> n;
T a[n];
cout << "enter the numbers that you want to sort: ";
for (int i = 0; i < n; i++){
cin >> a[i];
}
// sorting
T temp;
for (int i = 0; i < n; i++){
for (int j = 0; j < i + 1; j++){
if (a[i] < a[j]){
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
}
// printing
cout << "Sorted elements are:\n";
for (int i = 0; i < n; i++){
cout << a[i] << endl;
}
}
int main(){
    while(1){
        cout<<"choose from given options:\n"
            <<"1. Sorting of an integer array\n"
            <<"2. Sorting of float array\n"
            <<"3. Sorting of character array\n"
            <<"4. Exit\n"
            <<"\t Your Option: ";
            int n;
            cin>>n;
            switch (n){
                case 1:
                    sort(1);
                    break;
                case 2:
                    sort(1.1);
                    break;
                case 3:
                    sort('a');
                    break;
                case 4:
                    cout<<"Exiting the program!!!!!!!!!!!\n";
                    exit(0);
                default:
                    cout<<"Invalid option, choose again.\n";
                    break;
            }
    }
    return 0;
}