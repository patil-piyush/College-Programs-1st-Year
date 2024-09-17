#include <iostream>
#include <climits>
using namespace std;
class student
{
    string name;
    int roll_no;
    float sgpa;

public:
    void read();
    void display();
    void insertion();

    friend void radix_sort(student s[], int n);
    friend void count_sort(student s[], int pos, int n);
};
void student::read()
{
    cout << "Enter the name :";
    cin >> name;
    cout << "Roll No:";
    cin >> roll_no;
    cout << "Enter the sgpa:";
    cin >> sgpa;
}
void student::display()
{
    cout << "Name of the student:" << name << endl;
    cout << "Roll No:" << roll_no << endl;
    cout << "sgpa:" << sgpa << endl;
}
void count_sort(student s[], int pos, int n)
{
    int freq[10] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[(s[i].roll_no / pos) % 10]++;
    }

    for (int i = 1; i < 10; i++)
    {
        freq[i] += freq[i - 1];
    }

    student ans[n];
    for (int i = n - 1; i >= 0; i--)
    {
        ans[--freq[(s[i].roll_no / pos) % 10]] = s[i];
    }

    for (int i = 0; i < n; i++)
    {
        s[i] = ans[i]; // s reference sob[] and third s reference second s
    }
}
void radix_sort(student s[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (s[i].roll_no > max)
        {
            max = s[i].roll_no;
        }
    }
    for (int pos = 1; max / pos > 0; pos = pos * 10)
    {
        count_sort(s, pos, n);
    }
}
int main()
{
    int n;
    cout << "Enter the Number of Student :";
    cin >> n;
    student sobj[n];
    for (int i = 0; i < n; i++)
    {
        sobj[i].read();
    }

    radix_sort(sobj, n);

    cout << endl;

    cout << "Order According to Roll No. :" << endl;
    for (int i = 0; i < n; i++)
    {
        sobj[i].display();
    }
    return 0;
}