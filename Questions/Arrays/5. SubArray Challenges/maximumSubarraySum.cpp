#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;


int maximumSubarraySum(int arr[], int size)
{
    // [2, 4, 3]
    // 2 = 2
    // 2 4 = 6
    // 2 4 3 = 9
    // 4 = 4
    // 4 3 = 7
    // 3 = 3
    
    // 🟠 Bruteforce approach  
    // int maxSum = INT_MIN;

    // for(int i=0; i<size; i++)
    // {
    //     int currentSum = 0;
    //     for(int j=i; j<size; j++)
    //     {
    //         currentSum +=arr[j];
    //         maxSum = max(currentSum, maxSum);
    //     }
    // }
    // return maxSum;

    // 🔵 Optimised approach using Kadane's algorithm

    int maxSum = INT_MIN;
    int currentSum =0;
    for(int i=0; i<size; i++)
    {       
        currentSum += arr[i];
        if(currentSum < 0){
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main()
{
    int size;
    cout<<"Enter the size of the Array \n";
    cin>>size;

    int arr[size];

    cout<<"Enter the elements\n";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    int result = maximumSubarraySum(arr, size);

    cout<<result;
}