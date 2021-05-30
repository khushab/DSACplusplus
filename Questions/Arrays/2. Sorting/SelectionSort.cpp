#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int min = arr[i], index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                min = arr[j];
                index = j;
            }
        }
        arr[index] = arr[i];
        arr[i] = min;
    }

    for (int k = 0; k < size; k++)
    {
        cout << arr[k];
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

    selectionSort(arr, size);

    return 0;
}