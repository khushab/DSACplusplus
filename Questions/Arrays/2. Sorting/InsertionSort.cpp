#include <iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    int key;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    for (int l = 0; l < size; l++)
    {
        cout << arr[l];
    }
}

int main()
{

    int size;
    cout << "Enter the size of the array \n";
    cin >> size;

    int arr[size];

    cout << "Enter the elements\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, size);

    return 0;
}