#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abcacbade";
    int arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < str.size(); i++)
    {
        arr[str[i] - 'a']++;
    }

    int largest = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[largest] < arr[i])
        {
            largest = i;
        }
    }

    cout << str[largest] << " is repeated " << arr[largest] << " times";
}