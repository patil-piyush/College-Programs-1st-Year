#include<iostream>
using namespace std;

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low;
    int j = high;
    int temp;

    while(i < j) {

        do{i++;}while(i <= high && a[i] <= pivot);
        
        do{j--;}while(a[j] >= pivot);
        
        if(i < j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;

    return j;
}

void quicksort(int a[], int low, int high) {
    if(low < high) {
        int pos = partition(a, low, high+1);
        quicksort(a, low, pos - 1);
        quicksort(a, pos + 1, high);
    }
}

int main() {
    int a[5];
    cout << "Enter 5 integers: " << endl;
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    quicksort(a, 0, 4);
    cout << "Sorted array: " << endl;
    for(int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
