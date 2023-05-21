#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    // sett
    int n1 = mid - low + 1; // size of left array
    int n2 = high - mid;    // size of right array
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[low + i];
    }
    for (int j = 0; j < n2; j++)
    {
        right[j] = arr[mid + j + 1];
    }
    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
        }
    }
    while (i < n1)
    {
        arr[k++] = left[i++];
    }
    while (j < n2)
    {
        arr[k++] = right[j++];
    }
}

int main()
{

    int arr[] = {10, 15, 20, 40, 8, 55};
    int low = 0, mid = 3, high = 5;

    merge(arr, low, mid, high);
    for (int x : arr)
        cout << x << " ";
    return 0;
}