#include <iostream>
using namespace std;

int reverseArray(int arr[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for (int k = 0; k < size; k++)
    {
        cout << arr[k];
    }
}

int main()
{

    int myArray[5] = {1, 2, 3, 4, 5};

    reverseArray(myArray, 5);

    return 0;
}