#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int i = left;    //* Starting index for left sub array
    int j = mid + 1; //* Starting index for right sub array
    int k = left;    //* Starting index for temporary array

    int temp[6];

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= right)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int s = left; s <= right; s++)
    {
        arr[s] = temp[s];
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right) //* This check is for checking whether the array has only one element.
    {
        int mid = (left + right) / 2;
        mergeSort(arr, 0, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main()
{
    int array[6] = {4, 8, 1, 6, 11, 2};

    mergeSort(array, 0, 6);

    for (int i = 0; i <= 6; i++)
    {
        cout << array[i] << ", ";
    }

    return 0;
}