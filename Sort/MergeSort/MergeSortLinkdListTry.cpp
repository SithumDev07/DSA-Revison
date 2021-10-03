#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

node *head = NULL;

node *merge(node *a, node *b)
{
    //*Base case
    if (a == NULL)
        return b;

    if (b == NULL)
        return a;

    //* Reccursive case
    node *temp;
    if (a->data < b->data)
    {
        temp = a;
        temp->link = merge(a->link, b);
    }
    else
    {
        temp = b;
        temp->link = merge(a, b->link);
    }

    return temp;
}

node *getMidPoint(node *head)
{
    node *slow = head;
    node *fast = head->link;

    while (fast != NULL && fast->link != NULL)
    {
        slow = slow->link;
        fast = fast->link->link;
    }

    //* Returning midpoint address
    return slow;
}

node *mergeSort(node *head)
{
    if (head == NULL || head->link == NULL)
    {
        return head;
    }

    node *mid = getMidPoint(head);

    node *a = head;
    node *b = mid->link;
    mid->link = NULL;

    a = mergeSort(a);
    b = mergeSort(b);

    return merge(a, b);
}

void Append(int data)
{
    struct node *temp = new node();
    temp->data = data;
    temp->link = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct node *slider = head;
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
        cout << "Linked List is Empty.\n";
    }
    else
    {
        struct node *slider = head;
        while (slider != NULL)
        {
            cout << slider->data << ", ";
            slider = slider->link;
        }
    }
}

int main()
{
    Append(5);
    Append(4);
    Append(7);
    Append(10);
    Append(6);
    Show();
    cout << "After Sorting\n";
    mergeSort(head);
    Show();
    return 0;
}