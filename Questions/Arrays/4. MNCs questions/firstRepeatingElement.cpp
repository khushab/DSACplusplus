#include <iostream>
#include "bits/stdc++.h"
using namespace std;

int firstRepeatingElement(int arr[], int size)
{
    const int N = 500;
    int check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = -1;
    }
    int minIndex = INT_MAX;

    for (int j = 0; j < size; j++)
    {
        if (check[arr[j]] != -1)
        {
            if (minIndex > check[arr[j]])
            {
                minIndex = check[arr[j]];
            }
        }
        else
        {
            check[arr[j]] = j;
        }
    }
    // [-1, -1, 2, 3, -1, 2, -1, 9]
    // [ 0,  1, 2,  3,  4, 5,  6,  7]
    // [2, 3, 5, 9, 5, 3, 1]
    if (minIndex == INT_MAX)
    {
        return -1;
    }

    return minIndex;
}

int main()
{
    int size;
    cout << "Enter the size of the array\n";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int result = firstRepeatingElement(arr, size);
    cout << result;
}