#include <bits/stdc++.h>
using namespace std;

void reverseString(string str, int size)
{
    if (size == 0)
    {
        cout << str[0];
    }
    else
    {
        cout << str[size];
        reverseString(str, size - 1);
    }
}

int main()
{
    string str = "Khushab";

    reverseString(str, str.size());
}