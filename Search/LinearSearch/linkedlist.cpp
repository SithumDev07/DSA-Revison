#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

struct node *head = NULL;

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

int LinearSearch(int element)
{
    if (head == NULL)
    {
        cout << "\nNothing found, list is empty.\n";
        return -1;
    }
    else
    {
        struct node *slider = head;
        int count = 0;
        while (slider != NULL)
        {
            count++;
            if (slider->data == element)
            {
                return count;
            }
            slider = slider->link;
        }
        return -1;
    }
}

int main()
{
    Append(12);
    Append(8);
    Append(15);
    Append(36);
    Append(40);

    int result = LinearSearch(12);
    if (result == -1)
    {
        cout << "\nNothing found. list is empty\n";
    }
    else
    {
        cout << 12 << " Found at the position " << result;
    }
    return 0;
}