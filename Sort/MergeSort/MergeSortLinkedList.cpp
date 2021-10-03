#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
};

Node *head = NULL;

Node *midPoint(Node *head)
{
    Node *slow = head;
    Node *fast = head->link;

    while (fast != NULL && fast->link != NULL)
    {
        slow = slow->link;
        fast = fast->link->link;
    }

    return slow;
}

Node *merge(Node *a, Node *b)
{
    //* Base case
    if (a == NULL)
        return b;

    if (b == NULL)
        return a;

    //* Reccursive case
    Node *c;
    if (a->data < b->data)
    {
        c = a;
        c->link = merge(a->link, b);
    }
    else
    {
        c = b;
        c->link = merge(a, b->link);
    }

    return c;
}

Node *mergeSort(Node *head)
{
    if (head == NULL || head->link == NULL)
    {
        return head;
    }

    Node *mid = midPoint(head);

    //* Break at the mid
    Node *a = head;
    Node *b = mid->link;
    mid->link = NULL;

    //* Recursive Sort
    a = mergeSort(a);
    b = mergeSort(b);

    return merge(a, b);
}

void Append(int data)
{
    struct Node *temp = new Node();
    temp->data = data;
    temp->link = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct Node *slider = head;
        while (slider->link != NULL)
        {
            slider = slider->link;
        }
        slider->link = temp;
    }
}

void Show()
{
    if (head == NULL)
    {
        cout << "Linked list is empty";
    }
    else
    {
        Node *slider = head;
        while (slider != NULL)
        {
            cout << slider->data << ", ";
            slider = slider->link;
        }
    }
}

int main()
{
    Append(1);
    Append(6);
    Append(3);
    Append(8);
    Append(9);
    // cout << head->link->data;
    Show();
    mergeSort(head);
    cout << "After\n";
    Show();
    return 0;
}