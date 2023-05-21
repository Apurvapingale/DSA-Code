#include <iostream>
using namespace std;

int insert(int arr[], int n, int x, int cap, int pos)
{
    if (n == cap)
    {
        cout << "The element cannot be inserted as the array size is full" << endl;
        return n; // return the old size
    }
    else

    {
        int idx = pos - 1;
        // after inserting we move one position ahed
        for (int i = n - 1; i >= idx; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[idx] = x;
        return (n + 1);
    }
}

int main()
{
    int x, cap, pos;
    int arr[] = {5, 10, 20};
    cout << "Enter the no you want to insert:";
    cin >> x;
    cout << "Enter the position you want to enter: ";
    cin >> pos;
    cap = 5;
    int n = 3;
    n = insert(arr, n, x, cap, pos);
    cout << "Updated array with " << x << " at position " << pos << ":";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
