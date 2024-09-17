#include <iostream>
using namespace std;

// MERGE SORT LOGIC
void merge(int a[10], int low, int mid, int high)
{
    int i, j, k = 0, c[10];
    i = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k++] = a[i++];
        }
        else if (a[j] < a[i])
        {
            c[k++] = a[j++];
        }
        else
        {
            c[k++] = a[i++];
            c[k++] = a[j++];
        }
    }

    while (i <= mid)
    {
        c[k++] = a[i++];
    }
    while (j <= high)
    {
        c[k++] = a[j++];
    }

    for (i = low, k = 0; i <= high; i++, k++)
    {
        a[i] = c[k];
    }
}

void mergesort(int a[10], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);

        merge(a, low, mid, high);
    }
}
int main()
{
    int a[100], i, j, low = 0, mid = 0, high = 0, n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    mergesort(a, 0, n - 1);
    cout << "The MERGE SORT IS: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
