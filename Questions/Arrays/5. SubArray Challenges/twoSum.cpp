#include <bits/stdc++.h>
using namespace std;

bool twoSum(int arr[], int size, int sum)
{
    // 🟠bruteforce approach
    // for(int i=0; i<size-1; i++)
    // {
    //     for(int j=i+1; j<size; j++)
    //     {
    //         if(arr[i] + arr[j] ==  sum)
    //         {
    //             cout<<"indexes: "<<i<<", "<<j<<endl;
    //             return true;
    //         }
    //     }
    // }
    // return false;

    // 🔵 Optimized approach(only if the array is sorted)
    sort(arr, arr + size);
    cout<<"Sorting the array...\n";
    cout<<"Sorted array \n";
    for (int i = 0; i < size; i++)    
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    int low = 0;
    int high = size -1;
    
    while(low<high) 
    {
        int currentSum = arr[low] + arr[high];
        if(currentSum == sum)
        {
            cout<<"indexes: "<<low<<", "<<high<<endl;
            return true;
        }
        else if(currentSum > sum){
            high--;
        }
        else{
            low++;
        }
    }
    return false;

}

int main ()
{
    int size, sum;
    cout<<"Enter the size of the Array \n";
    cin>>size;

    int arr[size];

    cout<<"Enter the elements\n";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the sum\n";
    cin>>sum;

    bool result = twoSum(arr, size, sum);
    cout<<result;
}