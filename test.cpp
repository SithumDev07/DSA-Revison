#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[5] = {45, 85, 2, 185, 11};
    int result = linearSearch(arr, 5, 11);

    if (result == -1)
    {
        cout << 300 << " is not found in the array";
    }
    else
    {
        cout << arr[result - 1] << " found at the position of " << result;
    }
    return 0;
}