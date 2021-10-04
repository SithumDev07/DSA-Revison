#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

node *head = NULL;

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
        cout << "List is empty.";
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
    Append(1);
    Append(5);
    Append(3);
    Append(7);
    Append(10);
    Show();
    cout << "\n"
         << getMidPoint(head)->data;
    return 0;
}