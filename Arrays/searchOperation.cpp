#include <iostream>
using namespace std;

void search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "The element is at position :"
                 << " " << i << endl;
            return;
        }
    }
    cout << "The element is not in array" << endl;
}
int main()
{
    int arr[] = {20, 30, 5, 7};
    int x;
    cout << "Enter the element you want to search: ";
    cin >> x;
    search(arr, 4, x);
    return 0;
}
