#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;

    void input();
    void show();
    friend void mergeSort(Employee e[], int low, int high);
};

void Employee::input()
{
    cout << "Enter the ID of the employee: ";
    cin >> id;
    cout << "Enter the name of the employee: ";
    cin >> name;
    cout << "Enter the salary of the employee: ";
    cin >> salary;
    cout << "---------------------------------" << endl;
}

void Employee::show()
{
    cout << "Employee ID: " << id << endl
         << "Employee Name: " << name << endl
         << "Employee Salary: " << salary << endl
         << "---------------------------------" << endl;
}

// Merge Sort: Merging
void merge(Employee e[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    Employee temp[100];

    while (i <= mid && j <= high)
    {
        if (e[i].id < e[j].id)
        {
            temp[k++] = e[i++];
        }
        else
        {
            temp[k++] = e[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = e[i++];
    }

    while (j <= high)
    {
        temp[k++] = e[j++];
    }

    for (i = low, k = 0; i <= high; i++, k++)
    {
        e[i] = temp[k];
    }
}

// Merge Sort: Sorting
void mergeSort(Employee e[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(e, low, mid);
        mergeSort(e, mid + 1, high);
        merge(e, low, mid, high);
    }
}

int main()
{
    Employee e[100];
    int n;

    cout << "Enter the number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        e[i].input();
    }

    mergeSort(e, 0, n - 1);

    cout << "Employee data after sorting by ID:" << endl
         << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        e[i].show();
    }

    return 0;
}
