#include<iostream>
using namespace std;

class Employee
{
public:
    int empID;
    string empName;
    float empSalary;
    void getData();
    void showData();
    friend void mergeSort(Employee arr[], int start, int end);
};

void Employee::getData()
{
    cout << "Enter the ID of the employee: ";
    cin >> empID;
    cout << "Enter the name of the employee: ";
    cin >> empName;
    cout << "Enter the salary of the employee: ";
    cin >> empSalary;
    cout << "---------------------------------" << endl;
}

void Employee::showData()
{
    cout << "Employee ID: " << empID << endl
        << "Employee Name: " << empName << endl
        << "Employee Salary: " << empSalary << endl
        << "---------------------------------" << endl;
}

// Quick Sort
int Partition(Employee arr[], int low, int high)
{
    int pivot = arr[low].empID; // considering first element as pivot
    int i = low;
    int j = high;

    while (i < j) {
        do {
            i++;
        } while (i <= high && arr[i].empID <= pivot);

        do {
            j--;
        } while (arr[j].empID > pivot);

        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]); // Swap the pivot element with arr[j]
    return j;
}

void QuickSort(Employee arr[], int low, int high) {
    if (low < high) {
        int pos = Partition(arr, low, high + 1);
        QuickSort(arr, low, pos - 1);
        QuickSort(arr, pos + 1, high);
    }
}

// Merge Sort
void merge(Employee arr[], int start, int mid, int end)
{
    int left = start, right = mid + 1, index = 0;
    Employee tempArr[100];

    while (left <= mid && right <= end)
    {
        if (arr[left].empName < arr[right].empName)
        {
            tempArr[index++] = arr[left++];
        }
        else
        {
            tempArr[index++] = arr[right++];
        }
    }

    while (left <= mid)
    {
        tempArr[index++] = arr[left++];
    }

    while (right <= end)
    {
        tempArr[index++] = arr[right++];
    }

    for (left = start, index = 0; left <= end; left++, index++)
    {
        arr[left] = tempArr[index];
    }
}

void mergeSort(Employee arr[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    Employee empArr[100];
    int empCount;

    cout << "Enter the number of employees: ";
    cin >> empCount;

    for (int i = 0; i < empCount; i++)
    {
        empArr[i].getData();
    }

    // Sort by ID using QuickSort
    QuickSort(empArr, 0, empCount - 1);

    cout << "\n\nEmployee data after sorting by ID:" << endl;
    for (int i = 0; i < empCount; i++)
    {
        empArr[i].showData();
    }

    // Sort by Name using MergeSort
    mergeSort(empArr, 0, empCount - 1);

    cout << "\n\nEmployee data after sorting alphabetically by Name:" << endl;
    for (int i = 0; i < empCount; i++)
    {
        empArr[i].showData();
    }

    return 0;
}
