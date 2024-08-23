#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    float sgpa;

public:
    void read();
    void display();
    friend void insertionSort(Student s[], int n);
    friend void shellSort(Student s[], int n);
    friend void mergeSort(Student s[], int low, int high);
};

// Function to read student data
void Student::read()
{
    cout << "Enter the roll number of student: ";
    cin >> roll;
    cout << "Enter the name of student: ";
    cin >> name;
    cout << "Enter the sgpa of student: ";
    cin >> sgpa;
    cout << "-------------------------------------------------" << endl;
}

// Function to display student data
void Student::display()
{
    cout << "Roll number of student: " << roll << endl
         << "Name of student: " << name << endl
         << "SGPA of student: " << sgpa << endl
         << "-------------------------------------------------" << endl;
}

// Insertion Sort
void insertionSort(Student s[], int n)
{
    Student x;
    for (int i = 1; i < n; i++)
    {
        x = s[i];
        int j = i - 1;
        while (j >= 0 && s[j].roll > x.roll)
        {
            s[j + 1] = s[j];
            j--;
        }
        s[j + 1] = x;
    }
}

// Shell Sort
void shellSort(Student s[], int n)
{
    Student x;
    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i++)
        {
            x = s[i];
            int j = i - gap;
            while (j >= 0 && s[j].roll > x.roll)
            {
                s[j + gap] = s[j];
                j -= gap;
            }
            s[j + gap] = x;
        }
    }
}

// Merge Sort: Merging two halves
void merge(Student s[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0;
    Student temp[100];

    while (i <= mid && j <= high)
    {
        if (s[i].roll < s[j].roll)
        {
            temp[k++] = s[i++];
        }
        else
        {
            temp[k++] = s[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = s[i++];
    }

    while (j <= high)
    {
        temp[k++] = s[j++];
    }

    for (i = low, k = 0; i <= high; i++, k++)
    {
        s[i] = temp[k];
    }
}

// Merge Sort: Sorting
void mergeSort(Student s[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(s, low, mid);
        mergeSort(s, mid + 1, high);
        merge(s, low, mid, high);
    }
}

int main()
{
    Student s[100];
    int n, choice;

    cout << "Enter the number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        s[i].read();
    }

    cout << "Choose sorting method:" << endl
         << "1. Insertion Sort" << endl
         << "2. Shell Sort" << endl
         << "3. Merge Sort" << endl
         << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        insertionSort(s, n);
        break;
    case 2:
        shellSort(s, n);
        break;
    case 3:
        mergeSort(s, 0, n - 1);
        break;
    default:
        cout << "Invalid choice!" << endl;
        return 1;
    }

    cout << "Data after sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }

    return 0;
}
