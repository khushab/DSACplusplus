#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
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

    int result = linearSearch(arr, size, element);
    cout << result;

    return 0;
}