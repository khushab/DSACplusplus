#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "khushab";

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    cout << str;
    //inbuit function to convert to lowerCase
    string str2 = "alam";
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
}