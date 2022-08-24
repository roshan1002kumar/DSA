#include <iostream>
#include <algorithm>
using namespace std;

void selection_sort(int a[], int l)
{
    for (int i = 0; i < l; i++)
    {
        int min_idx = i;
        for (int j = i; j < l; j++)
        {
            if (a[min_idx] > a[j])
            {
                min_idx = j;
            }
        }
        swap(a[i], a[min_idx]);
    }
}

void Bubble_sort(int a[], int l)
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

void insertion_sort(int a[], int l)
{
    for (int i = 1; i < l; i++)
    {
        int e = a[i];
        int j = i - 1;
        while (j >= 0 & a[j] > e)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = e;
    }
}

// https://youtu.be/4z9I6ZmeLOQ
// l = left most index
// r = Right most index

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    // created two temperary arry
    int a[n1], b[n2];

    // then we copy all the element of arr from l to mid in a and mid+1 to r in b to create two seperate array
    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0; // starting index of array a
    int j = 0; // starting index of array b
    int k = l; // starting index of main array

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}
void merge_sort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, r);

        merge(a, l, mid, r);
    }
}

// https://youtu.be/Dl6HT-NM_q4
int partition(int arr[], int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return i + 1;
}
void quick_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);

        quick_sort(arr, l, pi - 1);
        quick_sort(arr, pi + 1, r);
    }
}
int main()
{
    int n;
    cout << "Enter size of an array : ";
    cin >> n;
    cout << endl
         << "Enter values : ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl
         << "Which Sorting Algorithm You would like to Perform : -" << endl
         << "1. Selection Sort" << endl
         << "2. Bubble Sort" << endl
         << "3. Insertion Sort " << endl
         << "4. Merge Sort" << endl
         << "5. Quick Sort" << endl;
    int x;
    cin >> x;
    if (x == 1)
    {
        selection_sort(arr, n);
    }
    else if (x == 2)
    {
        Bubble_sort(arr, n);
    }
    else if (x == 3)
    {
        insertion_sort(arr, n);
    }
    else if (x == 4)
    {
        merge_sort(arr, 0, n - 1);
    }
    else if (x == 5)
    {
        quick_sort(arr, 0, n);
    }
    else
    {
        cout << "choose invlaid option" << endl;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}