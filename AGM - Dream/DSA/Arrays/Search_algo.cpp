// complexity of linear search - O(n)
// complexity of binar searh - O(log n)
#include <bits/stdc++.h>
using namespace std;

int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int binary_search(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int result = linear_search(arr, n, key);
    (result == -1) ? cout << "Key is not present"<< endl : cout << "key is present at index : " << result << endl;
    result = binary_search(arr, n, key);
    (result == -1) ? cout << "Key is not present"<< endl : cout << "key is present at index : " << result << endl;
    return 0;
}