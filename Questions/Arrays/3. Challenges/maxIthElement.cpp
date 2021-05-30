#include <iostream>
using namespace std;

void maxIthElement(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            cout << "Max element at index " << i << " is " << max << endl;
        }
        else
        {
            cout << "Max element at index " << i << " is " << max << endl;
        }
    }
}

int main()
{
    int size;
    cout << "Enter the size of the Array \n";
    cin >> size;

    int arr[size];

    cout << "Enter the elements\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    maxIthElement(arr, size);
}