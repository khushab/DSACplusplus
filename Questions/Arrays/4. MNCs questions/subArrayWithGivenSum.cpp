#include <iostream>
using namespace std;

int subArrayWithGivenSum(int arr[], int size, int sum)
{
    // [1,2, 3, 4, 5], sum = 9
    int subArrays = 0;
    for (int i = 0; i < size; i++)
    {
        int currentSum = arr[i];
        int j = i + 1;
        while (currentSum <= sum)
        {
            if (currentSum == sum)
            {
                subArrays = subArrays + 1;
            }
            currentSum = currentSum + arr[j];
            j--;
        }
    }
    if (subArrays == 0)
    {
        return -1;
    }
    else
    {
        return subArrays;
    }
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
    cout << "Enter the sum \n";
    cin >> sum;

    int result = subArrayWithGivenSum(arr, size, sum);
    cout << result;
}