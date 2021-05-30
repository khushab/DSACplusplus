#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
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

    bubbleSort(arr, size);

    return 0;
}