#include <iostream>
using namespace std;
int main()
{

    int size;
    cout << "Enter the size of Array \n";
    cin >> size;

    int arr[size];

    cout << "Enter the elements of the Array \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int maxNo = arr[0];
    int minNo = arr[0];

    for (int j = 1; j < size; j++)
    {
        // if (arr[j] > maxNo)
        // {
        //     maxNo = arr[j];
        // }
        // OR-----
        maxNo = max(maxNo, arr[j]);

        // if (arr[j] < minNo)
        // {
        //     minNo = arr[j];
        // }
        // OR-----
        minNo = min(minNo, arr[j]);
    }

    cout << "Mininum is\n"
         << minNo;
    cout << "\nMaximum is\n"
         << maxNo;

    return 0;
}