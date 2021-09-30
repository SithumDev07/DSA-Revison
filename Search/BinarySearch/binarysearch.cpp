#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int element)
{
    int left = 0;
    int right = size - 1;
    int mid = 0;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (element == arr[mid])
        {
            return mid + 1;
        }
        else if (element < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int a[10] = {35, 1, 85, 55, 14, 23, 69, 91, 12, 5};
    int result = BinarySearch(a, 10, 14);

    if (result == -1)
    {
        cout << "Result not found";
    }
    else
    {
        cout << a[result - 1] << " Found at position " << result;
    }

    return 0;
}