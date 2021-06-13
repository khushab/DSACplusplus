#include <iostream>
using namespace std;

void sumOfAllSubarrays(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum = sum + arr[j];
            cout << sum << endl;
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

    sumOfAllSubarrays(arr, size);
}