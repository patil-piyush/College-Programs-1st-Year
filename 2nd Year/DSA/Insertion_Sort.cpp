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
};

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

void Student::display()
{

    cout
        << "roll number of student: " << roll << endl
        << "Enter the name of student: " << name << endl
        << "Enter the sgpa of student: " << sgpa << endl
        << "-------------------------------------------------" << endl;
}

void insertionSort(Student s[], int n)
{
    Student x;
    for (int i = 1; i < n; i++)
    {
        x = s[i];
        int j = i - 1;
        while (s[j].roll > x.roll && j >= 0)
        {
            s[j + 1] = s[j];
            j--;
        }
        s[j + 1] = x;
    }
}

int main()
{
    Student s[10];
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s[i].read();
    }
    cout << "Data before sorting: " << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }

    insertionSort(s, n);
    cout << "Data after sorting: " << endl
         << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].display();
    }
    return 0;
}