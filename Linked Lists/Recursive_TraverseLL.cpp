#include <iostream>
using namespace std;

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

void rPrint(Node *head)
{

    if (head == NULL)
    {
        return;
    }

    else
    {

        cout << (head->data) << " ";
        rPrint(head->next);
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    cout << "The elements in list are:" << endl;
    rPrint(head);
    return 0;
}