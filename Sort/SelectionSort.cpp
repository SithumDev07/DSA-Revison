#include <iostream>
using namespace std;

//* Selection sort is select minimum value while traversing the array. then it swap with the first index.

void SelectionSort(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        int min = i;

        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[min]) //* Changing the comparison operator we can get the sorted array in decending order.
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
    int arr[5] = {4, 1, 8, 7, 2};
    SelectionSort(arr);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}