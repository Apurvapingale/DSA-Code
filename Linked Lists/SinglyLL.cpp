#include <iostream>
using namespace std;

// using struct because mized data type
// pointer next type is same as type of struct is called self refrential structure:every nodes need to have address of next node
// constructor: to initialize the node
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int main()
{
    int n;
    cout << "Enter the number of elements :";
    cin >> n;

    Node *head = NULL;
    Node *temp = NULL;
    Node *curr = NULL;

    cout << "Enter the elemnts :";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (head == NULL)
        {
            head = new Node(x);
            curr = head;
        }
        else
        {
            temp = new Node(x);
            curr->next = temp;
            curr = temp;
        }
    }
    cout << "Elements in the linked lists:";
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
    return 0;
}