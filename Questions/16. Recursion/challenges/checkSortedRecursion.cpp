#include <bits/stdc++.h>
using namespace std;

int i = 0;
int j = 1;
int num = 0;

int checkSort(int arr[], int size)
{
    if (size == 2)
    {
        return 1;
    }
    else
    {
        if (arr[size - 1] > arr[size - 2])
        {
            return checkSort(arr, size - 1);
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int arr[] = {1, 5, 4, 6, 7};
    int size = 5;
    int result = checkSort(arr, size);
    if (result)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }

    return 0;
}