#include <iostream>
using namespace std;

int smallestPositiveMissing(int arr[], int size)
{
    const int N = 1e6 + 2;
    bool check[N];
    int missingNumber = -1;
    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }

    for (int j = 0; j < size; j++)
    {
        if (arr[j] >= 0)
        {
            check[arr[j]] = true;
        }
    }

    for (int k = 1; k < size; k++)
    {
        if (check[k] == false)
        {
            missingNumber = k;
            break;
        }
    }
    return missingNumber;
}

int main()
{
    int size, sum;
    cout << "Enter the size of the array\n";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int result = smallestPositiveMissing(arr, size);
    cout << result;
}