#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int element)
{

    int start = 0;
    int end = size;
    int mid = (start + size) / 2;

    while (start <= end)
    {
        mid = (start + size) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int size, element;
    cout << "Enter the size of the Array\n";
    cin >> size;
    int arr[size];
    cout << "Enter the elements\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to be searched \n";
    cin >> element;

    int result = binarySearch(arr, size, element);
    cout << result;

    return 0;
}