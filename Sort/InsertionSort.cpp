#include <iostream>
using namespace std;

void insertionSort(int arr[])
{
    int j = 0;
    int key = 0;

    for (int i = 1; i < 5; i++)
    {
        key = arr[i]; //* Picking the element
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int main()
{
    int arr[5] = {4, 8, 7, 2, 5};
    insertionSort(arr);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}