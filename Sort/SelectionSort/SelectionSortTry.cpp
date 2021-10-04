#include <iostream>
using namespace std;

void selectionSort(int arr[])
{
    for (int i = 0; i < 8; i++)
    {
        int min = i;

        for (int j = i + 1; j < 8; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }

        if (min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{
    int arr[8] = {85, 76, 12, 45, 91, 34, 38, 48};
    selectionSort(arr);

    for (int i = 0; i < 8; i++)
    {
        if (i == 7)
        {
            cout << arr[i];
        }
        else
        {
            cout << arr[i] << ", ";
        }
    }
    return 0;
}