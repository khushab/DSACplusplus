#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "KHUSHAB";

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    cout << str;

    //inbuit function to convert to lowerCase
    string str2 = "ALAM";
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
}