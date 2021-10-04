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
    if (a == NULL)
        return b;

    if (b == NULL)
        return a;

    node *temp = NULL;

    if (a->data < b->data)
    {
        temp = a;
        merge(a->link, b);
    }
    else
    {
        temp = b;
        merge(a, b->link);
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

    return slow;
}

node *mergeSort(node *head)
{
    //* Base Case
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
    node *temp = new node();
    temp->data = data;
    temp->link = NULL;

    if (head == NULL)
        head = temp;

    else
    {
        node *slider = head;
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
        node *slider = head;
        while (slider != NULL)
        {
            cout << slider->data << ", ";
            slider = slider->link;
        }
    }
}

int main()
{
    Show();
    Append(4);
    Append(2);
    Append(1);
    Append(10);
    Append(5);
    Show();
    mergeSort(head);
    cout << "\nAfter sorting\n";
    Show();
    return 0;
}